#include <iostream>
#include <string>
using namespace std;

class MyClass
{
public:
    void myFunction()
    {
        cout << "Something from myFunction()" << endl;
    }
};

class Child : public MyClass
{
};

class GrandChild : public Child
{
public:
    void grandChildSpeaks()
    {
        cout << "GrandChild is speaking" << endl;
    }
};

int main()
{
    MyClass myObj;
    // myObj.myFunction();
    GrandChild grandChild;
    grandChild.grandChildSpeaks();
    grandChild.myFunction();
    return 0;
}