#include <iostream>

using namespace std;
#define row 3
#define col 4

class WordSearch
{

    char mat[3][4];
    char word[10] = {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'};
    int size, FLAG =0;

public:
    void getMat()
    {
        cout<<"\nENTER THE MATRIX : "<<endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> mat[i][j];
            }
        }
    }
    void getWord()
    {
        cout<<"\nENTER THE WORD: \n";
        cin >> word;
        int i = 0;
        while (word[i] != 0)
        {
            i++;
        }
        size = i - 1;
        //cout<<size;
    }
    void exist(int *counter)
    {
        if (counter[0] < size && counter[0] != 0)
        {
            int matchRow = counter[1], matchCol = counter[2], matchIndex = counter[0];
            if (mat[matchRow + 1][matchCol] == word[matchIndex] && matchRow != 2)
            {
                matchIndex++;
                counter[0] = matchIndex;
                counter[1] = matchRow + 1;
                counter[2] = matchCol;
                exist(counter);
            }
            else if (mat[matchRow - 1][matchCol] == word[matchIndex] && matchRow != 0)
            {
                matchIndex++;
                counter[0] = matchIndex;
                counter[1] = matchRow - 1;
                counter[2] = matchCol;
                exist(counter);
            }
            else if (mat[matchRow][matchCol + 1] == word[matchIndex] && matchCol != 3)
            {
                matchIndex++;
                counter[0] = matchIndex;
                counter[1] = matchRow;
                counter[2] = matchCol + 1;
                exist(counter);
            }
            else if (mat[matchRow][matchCol - 1] == word[matchIndex] && matchCol != 0)
            {
                matchIndex++;
                counter[0] = matchIndex;
                counter[1] = matchRow;
                counter[2] = matchCol - 1;
                exist(counter);
            }
            else
            {
                FLAG = 0;
                counter[0] = 0;
                exist(counter);
                
            }
        }
        else if (counter[0] == size)
        {
            cout << "True\n";
        }
        
    }
    void wordSearch()
    {

        int counter[3] = {0, 0, 0};

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (mat[i][j] == word[counter[0]])
                {
                    FLAG = 1;
                    counter[0]++;
                    counter[1] = i;
                    counter[2] = j;
                    exist(counter);
                }
            }
        }
        if (FLAG == 0)
        {
            cout << "False ";
        }
    }
};
int main()
{
    WordSearch word1;
    word1.getMat();
    word1.getWord();
    word1.wordSearch();
    word1.getWord();
    word1.wordSearch();
    return 0;
}