#include<iostream>

using namespace std;

int main()
{
    int x;
    int *ptr;
    int **dptr;
    x = 10;
    ptr = &x;
    dptr = &ptr;
    cout<<"x is "<<x<<endl;   //x is 10
    cout<<"ptr is "<<ptr<<endl;   //ptr is 00DFFCFB
    cout<<"*ptr is "<<*ptr<<endl;   //*ptr is 10
    cout<<"*dptr is "<<*dptr<<endl;   //*dptr is 00DFFCFB
    cout<<"**dptr is "<<**dptr;   //**dptr is 10
    return 0;
}