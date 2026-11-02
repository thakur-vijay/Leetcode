#include <iostream>
#include <unordered_set>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    unordered_set<int> seenValues;

    for (int i = 0; i < nums.size(); i++)
    {
        if (seenValues.find(nums[i]) != seenValues.end())
        {
            return true;
        }
        else
        {
            seenValues.insert(nums[i]);
        }
    }
    return false;
}

int main()
{

    vector<int> nums = {1, 2, 3, 4};
    bool contains = containsDuplicate(nums);

    cout << contains << endl;
    return 0;
}