#include<iostream>

using namespace std;

int main()
{
    int *p;
    int x = 10;
    p = &x;

    cout<<"p holds the address :"<<p<<endl;
  
    cout<<"Address of p is :"<<&p<<endl;
    return 0;

}