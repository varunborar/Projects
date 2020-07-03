#include <iostream>

using namespace std;

int main()
{
    int x[5] = {10, 15, 20, 25, 30};
    int *ptr;
    char test[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char *cptr;
    cptr = test;
    ptr = x;

    for (int i = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        *ptr = 0;
        ptr++;
    }
    cout << x[0] << " "
         << x[1] << " "
         << x[2] << " "
         << x[3] << " "
         << x[4] << "\n";

    for (int i = 0; i < 26; i++)
    {
        char temp = *cptr;
        cout << *cptr << " ";
        *cptr = char(temp - 32);
        cptr++;
    }
    cout << "\n";
    cptr--; // Reaching th value of Z
    for (int i = 0; i < 26; i++)
    {
        cout << *cptr << " ";
        cptr--;
    }
    // *cptr = NULL;
    // cout<<*cptr;
    return 0;
}