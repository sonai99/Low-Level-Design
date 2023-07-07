#include <iostream>
#include <string>
using namespace std;

int main()
{
    try
    {
        int age;
        cout << "Put the age" << endl;
        cin >> age;
        if (age >= 18)
        {
            cout << "Access Granted - You are old enough!";
        }
        else
        {
            // throw(age);
            // throw 505;
            // throw runtime_error("age not enough");
        }
    }
    catch (int myNum)
    {
        cout << "Access denied - You must be at least 18 years old.\n";
        cout << "Your Age is: " << myNum;
    }
    return 0;
}