#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    string name;
    int age;

    // Constructor with parameters
    Person(string personName, int personAge)
    {
        name = personName;
        age = personAge;
        cout << "Constructor called for " << name << endl;
    }

    // Method to display person information
    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    // Create a Person object using the constructor
    Person person1("Alice", 25);

    // Display person information
    person1.displayInfo();

    // Create another Person object using the constructor
    Person person2("Bob", 30);

    // Display person information
    person2.displayInfo();
    cout << person1.age << endl;
    cout << person2.age;
    return 0;
}
