#include <iostream>

using namespace std;

class VehicleInterface
{
protected:
    int engine;
    int doors;
    int capacity;

public:
    virtual int getEngine() = 0;
    virtual int getDoors() = 0;
    virtual int getCapacity() = 0;
    virtual void setEngine(int) = 0;
    virtual void setDoors(int) = 0;
    virtual void setCapacity(int) = 0;
    virtual void StartVehicle();
    virtual void StopVehicle() = 0;
};

class Car : public VehicleInterface
{
public:
    void setEngine(int eng)
    {
        engine = eng;
    }
    void setDoors(int Door)
    {
        doors = Door;
    }
    void setCapacity(int cap)
    {
        capacity = cap;
    }
    int getEngine()
    {
        return engine;
    }
    int getDoors()
    {
        return doors;
    }
    int getCapacity()
    {
        return capacity;
    }

    void StartVehicle()
    {
        cout << "Car Started\n";
    }
    void StopVehicle()
    {
        cout << "Car Stopped\n";
    }
};
class Train : public VehicleInterface
{
public:
    void setEngine(int eng)
    {
        engine = eng;
    }
    void setDoors(int Door)
    {
        doors = Door;
    }
    void setCapacity(int cap)
    {
        capacity = cap;
    }
    int getEngine()
    {
        return engine;
    }
    int getDoors()
    {
        return doors;
    }
    int getCapacity()
    {
        return capacity;
    }

    void StartVehicle()
    {
        cout << "Train Started \n";
    }
    void StopVehicle()
    {
        cout << "Train Stopped \n";
    }
};
class Bike : public VehicleInterface
{
public:
    void setEngine(int eng)
    {
        engine = eng;
    }
    void setDoors(int Door)
    {
        doors = Door;
    }
    void setCapacity(int cap)
    {
        capacity = cap;
    }
    int getEngine()
    {
        return engine;
    }
    int getDoors()
    {
        return doors;
    }
    int getCapacity()
    {
        return capacity;
    }

    void StartVehicle()
    {
        cout << "Bike Started \n";
    }
    void StopVehicle()
    {
        cout << "Bike Stopped \n";
    }
};

int main()
{
    VehicleInterface *newVehicle;

    newVehicle = new Car();
    newVehicle->StartVehicle();
    newVehicle->setEngine(1100);
    newVehicle->setCapacity(5);
    newVehicle->setDoors(4);
    cout << "Engine Power: " << newVehicle->getEngine() << endl;
    cout << "Vehicle Capacity: " << newVehicle->getCapacity() << endl;
    cout << "Vehicle Door Count: " << newVehicle->getDoors() << endl;
    newVehicle->StopVehicle();
    delete newVehicle;

    newVehicle = new Train;
    newVehicle->StartVehicle();
    newVehicle->setEngine(10000);
    newVehicle->setCapacity(100);
    newVehicle->setDoors(8);
    cout << "Engine Power: " << newVehicle->getEngine() << endl;
    cout << "Vehicle Capacity: " << newVehicle->getCapacity() << endl;
    cout << "Vehicle Door Count: " << newVehicle->getDoors() << endl;
    newVehicle->StopVehicle();
    delete newVehicle;

    newVehicle = new Bike;
    newVehicle->StartVehicle();
    newVehicle->setEngine(400);
    newVehicle->setCapacity(2);
    newVehicle->setDoors(0);
    cout << "Engine Power: " << newVehicle->getEngine() << endl;
    cout << "Vehicle Capacity: " << newVehicle->getCapacity() << endl;
    cout << "Vehicle Door Count: " << newVehicle->getDoors() << endl;
    newVehicle->StopVehicle();
    delete newVehicle;

    return 0;
}