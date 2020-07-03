#include <iostream>
#include <math.h>
using namespace std;
class Outscal
{
    int subsetSize;

    int elementCount;

public:
    //void printSet(int elementCount);
    void subsets(int nums[], int size)
    {
        //WRITE YOUR CODE HERE
        elementCount = size;
        subsetSize = pow(2, size);
        int counter, j;
        cout << "[" << endl;
        // for (int i = 0; i < subsetSize; i++)
        // {
        //     int counter = i%3;
        //     cout << "[";
        //     while (elementCount >= 0 && counter < size)
        //     {
        //         cout<<nums[counter]<<" ";
        //         elementCount--;
        //         counter++;
        //     }
        //     cout << "]"<<endl;
        // }
        // cout << "]";
        for (counter = 0; counter < subsetSize; counter++)
        {
            cout<<"[ ";
            for (j = 0; j < size; j++)
            {
                /* Check if jth bit in the counter is set 
            If set then print jth element from set */
                if (counter & (1 << j))
                    cout << nums[j]<<" ";
            }
            cout << "]"<<endl;
        }
        cout<<"]";
    }
};


int main()
{
    // int size;
    // cin >> size;
    // int arr[10];
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> arr[i];
    // }
    int arr[3] = {1, 2, 3};
    int size = 3;

    class Outscal s;
    s.subsets(arr, size);
}