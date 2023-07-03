#include <iostream>
#include <string>
using namespace std;

class MyClass
{
public:
    int myNum;
    string myString;
    int year;
    void myNewMethod(int number);
    void myMethod(string name)
    {
        cout << name << endl;
    }
};

void MyClass::myNewMethod(int number) {
    cout<<number<<endl;
}

int main()
{
    // Create an obj of myclass
    // MyClass myObj;

    // myObj.myNum = 5;
    // myObj.myString = "Hello";
    // myObj.myNum = 10;
    // cout << myObj.myNum << endl;
    // cout << myObj.myString << endl;
    // myObj.myMethod("Anirban");
    // myObj.myNewMethod(10);
    
    
    return 0;
}