#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    char Rand[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    time_t seed;
    int seedval = (unsigned)time(&seed);
    int randomValue;
    srand(seedval);
    char randomArray[25];

    for (int k = 0; k < 5; k++)
    {
        cout << "---------------------" << endl;
        cout << "| ";
        for (int i = 0; i < 5; i++)
        {

            randomValue = (rand() % 25);
            randomArray[(5 * k) + i] = Rand[randomValue];
            cout << Rand[randomValue] << " | ";
        }
        cout << endl;
    }
    cout << "---------------------" << endl;
    for (int k = 0; k < 5; k++)
    {
        for (int i = 0; i < 5; i++)
        {
            cout << randomArray[(k * 5) + i] << " ";
        }
        cout << endl;
    }

    return 0;
}