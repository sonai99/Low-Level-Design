#include <iostream>
#include <string>
using namespace std;

class MyClass
{
public:
    void myFunction()
    {
        cout << "Some in My class" << endl;
    }
};

class MyOtherClass
{
public:
    void myOtherFunction()
    {
        cout << "Some in Other Class" << endl;
    }
};

class MyChildClass : public MyClass, public MyOtherClass
{
};

int main()
{
    MyChildClass myChild;
    myChild.myFunction();
    myChild.myOtherFunction();
    return 0;
}