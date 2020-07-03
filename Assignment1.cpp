#include<iostream>

using namespace std;

class Vehicle
{
   int gear;

   public:

   void setGear(int Gear)
   {
        gear = Gear;
   }

   int getGear()
   { return gear;}
};

void modifyGear(Vehicle *vehicle)
{
    cout<<"Intial Value of Gears : "<< vehicle->getGear()<<endl;
    vehicle->setGear(10);
}
int main()
{
  
  Vehicle *ptr = new Vehicle; 
  ptr->setGear(4);
  modifyGear(ptr);
  cout<<"Final Value of gear : "<<ptr->getGear();
  delete ptr;

}