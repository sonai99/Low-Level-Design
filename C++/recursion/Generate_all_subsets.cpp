#include <iostream>
#include <vector>
using namespace std;

void printSubsetsHelper(vector<int> &nums, vector<int> &subset, int index)
{
    // base case
    if (index == nums.size())
    {
        cout << "{";
        for (int num : subset)
        {
            cout << num << " ";
        }
        cout << "}" << endl;
        return;
    }
    subset.push_back(nums[index]);
    printSubsetsHelper(nums, subset, index + 1);
    subset.pop_back();
    printSubsetsHelper(nums, subset, index + 1);
}

void printSubsets(vector<int> &nums)
{
    vector<int> subset;
    printSubsetsHelper(nums, subset, 0);
}

int main()
{
    vector<int> nums = {1, 2, 3};
    cout << "All subsets: " << endl;
    printSubsets(nums);
    return 0;
}