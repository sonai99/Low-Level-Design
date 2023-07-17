#include <iostream>
#include <string>
using namespace std;

int sum(int k)
{
    if (k > 0)
    {
        return k + sum(k - 1);
    }
    else
    {
        return 0;
    }
}

unsigned long long factorial(unsigned int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    // int result = sum(2);
    // cout << result << " ";

    int num = 5;
    unsigned long long result = factorial(num);
    cout << result;

    return 0;
}