#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
public:
    string brand = "ford";
    void honk()
    {
        cout << "honk honk" << endl;
    }
};

// Derived Class (Child) inherits properties from Vehicle class (Parent)
class Car : public Vehicle
{
public:
    string model = "Mustang";
};

int main()
{
    Car myCar;
    Vehicle vehicle;
    vehicle.honk();
    // myCar.honk();
    // cout << myCar.brand;
    cout << vehicle.brand;
    return 0;
}