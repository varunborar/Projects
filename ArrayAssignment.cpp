#include<iostream>

using namespace std;

void Delete(int *Arr, int pos, int size)
{
    for (int i = pos; i < size - 1; i++)
    {
        Arr[i] = Arr[i+1];
    }
    Arr[size-1] = 0;
}

int removeElement(int *Arr, int target, int size)
{
   
    int newSize = size;
    for (int i = 0; i < size ; i++)
    {
        if (Arr[i] == target)
        {
            Delete(Arr, i, size);
            size--;
            i--;
        }
    }
    return size;
}

int main()
{
    int Arr[10];
    int size;
    cin>> size ;
    for (int i = 0; i < size; i++)
    {
        cin >> Arr[i];
    }

    int target;
    cin  >> target;
    int newSize = removeElement(Arr, target, size);
    cout << newSize << endl;
    for (int i = 0; i < newSize; i++)
    {
        cout << Arr[i] << " ";
    }

}