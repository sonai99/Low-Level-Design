#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void insert(vector<int> &arr, int temp)
{
    // base case
    if (arr.size() == 0 || arr[arr.size() - 1] <= temp)
    {
        arr.push_back(temp);
        return;
    }
    int val = arr[arr.size() - 1];
    arr.pop_back();
    insert(arr, temp);
    arr.push_back(val);
    return;
}

void sort(vector<int> &arr)
{
    // base case
    if (arr.size() == 0)
        return;
    int temp = arr[arr.size() - 1];
    arr.pop_back();
    sort(arr);
    insert(arr, temp);
}

int main()
{
    vector<int> arr = {1, 4, 5, 0};
    sort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
