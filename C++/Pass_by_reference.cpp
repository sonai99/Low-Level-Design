#include <iostream>
#include <string>
using namespace std;

void swapNums(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

void increment(int &x)
{
    x++;
}
int main()
{
    int num1 = 10;
    int num2 = 20;

    // swapNums(num1, num2);
    // cout << num1 << " " << num2;

    increment(num1);
    cout << num1;
    return 0;
}