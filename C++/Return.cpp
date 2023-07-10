#include <iostream>
#include <string>
using namespace std;

int myFunction(int x)
{
    return 5 + x;
}

int myNewFunction(int y, int z)
{
    return y + z;
}

int main()
{
    // cout << myFunction(3);
    // cout << myNewFunction(5, 3);
    int ans = myNewFunction(2, 3);
    cout << ans;
    return 0;
}