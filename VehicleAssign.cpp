#include <iostream>

using namespace std;

class Vehicle
{
    int gear;

public:
    Vehicle(int getGear)
    {
        gear = getGear;
        cout << "Creating a vehicle with gears :" << gear<<endl;
    }
    ~Vehicle()
    {
        cout << "Clearing the vehicle with gears :" << gear<<endl;
    }
};

class Car : public Vehicle
{
    int doors;

    public:
    
    Car(int getGear, int getDoor) : Vehicle(getGear)
    {
        doors = getDoor;
        cout<<"Car Object Created with doors :"<<doors<<endl;
    }
    ~Car()
    {
        cout<<"Car Object Destroyed with doors :"<<doors<<endl;
    }
};

void localObjects()
{
    Vehicle *localVehicle = new Vehicle(5);
    delete localVehicle;
    Car *localCar = new Car(10, 4);
    delete localCar;
}
int main()
{   
    Vehicle *newVehicle1 = new Vehicle(1);
    Vehicle *newVehicle2 = new Vehicle(2);
    Car *newCar1 = new Car(12, 2);
    localObjects();
    Vehicle *newVehicle3 = new Vehicle(3);
    

    delete newCar1;
    delete newVehicle1;
    delete newVehicle2;
    delete newVehicle3;
    return 0;
}