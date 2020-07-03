#include<iostream>

using namespace std;

template<typename Sum>

Sum addTwo(Sum a, Sum b)
{
    return Sum(a+b);
}
int main()
{
   
    cout<<addTwo<int>(5,10)<<endl;
    cout<<addTwo<float>(5.6,10.4)<<endl;
    cout<<addTwo<char>('A','A');
    unique_ptr<int> data(new int());
    return 0;
}