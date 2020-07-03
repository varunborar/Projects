#include<iostream>

using namespace std;

template <typename AB>
class GenericPlayer
{
    public:
    AB ab;
};
int main()
{
    
    GenericPlayer<int> p1;
    p1.ab = 100;
    cout<<p1.ab<<endl;

    GenericPlayer<char> p2;
    p2.ab = 'c';
    cout<<p2.ab<<endl;
    
    
    return 0;

}