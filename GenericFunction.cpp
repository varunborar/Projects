#include <iostream>

using namespace std;

template <typename T>

void sum(T a, T b)
{
    cout << a + b << " "<<endl;
}

int main()
{
    sum<float>(10.3, 10.4);
    
    sum<int>(10, 12);
}
