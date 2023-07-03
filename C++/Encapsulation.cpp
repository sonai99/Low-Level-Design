#include <iostream>
using namespace std;

class Employee
{
private:
    int salary;
    string name;

public:
    // Setter method
    void setSalary(int s)
    {
        salary = s;
    }

    // Getter method
    int getSalary()
    {
        cout << salary << " ";
        return salary;
    }

    void setName(string newname)
    {
        name = newname;
    }

    string getName()
    {
        return name;
    }
};

int main()
{
    Employee employee1;
    employee1.setSalary(30);
    cout << employee1.getSalary() << endl;
    employee1.setName("Anirban");
    cout << employee1.getName();
    return 0;
}
