#include<iostream>

using namespace std;

class player
{
    int data1,data2,data3;
    public:
    
    void setData(int Data1, int Data2, int Data3 )
    {
        data1 = Data1;
        data2 = Data2;
        data3 = Data3;

    }
    void changeData()
    {
        data1 = 10;
        data2 = 15;
        data3 = 20;

    }
    void showData()
    {
        cout<<"D1 "<<data1<<" D2 "<<data2<<" D3 "<<data3<<endl;

    }
};

player changeObject(player ob1)
{
    ob1.setData(19,3,35);
    return ob1;

}
int main()
{
    player ob2;
    ob2 = changeObject(ob2);
    ob2.showData();
    ob2.changeData();
    ob2.showData();

    return 0;

}