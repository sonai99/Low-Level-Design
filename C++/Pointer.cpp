#include <iostream>
#include <string>
using namespace std;

int main()
{
    // string food = "Pizza";
    // // cout << food << endl;
    // cout << &food << endl;
    // string *ptr = &food;
    // cout << ptr << endl;
    // cout << &ptr << endl;
    // cout << *ptr << endl;

    // *ptr = "Burger";
    // cout << *ptr;

    int arr[] = {1, 2, 3};
    int p = arr[0];
    int q = arr[1];
    // cout << p << endl;
    // cout << &p << endl;
    // cout << &q << endl;

    int *ptr = &p;
    // ptr = &q;
    // cout << ptr << endl;
    *ptr = 12319;
    cout << *ptr;
    // for(auto i : arr){
    //     cout<<arr[i]<<"-";
    // }
    cout << arr[1];
    return 0;
}