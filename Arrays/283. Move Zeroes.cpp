#include <iostream>
using namespace std;

// Input : nums = [ 0, 1, 0, 3, 12 ]
/*
1, 0, 0, 3, 12
*/
//  Output : [ 1, 3, 12, 0, 0 ]

void moveZeroes(vector<int> &nums)
{
    // int start = 0, end = 1;
    // while (end < nums.size())
    // {
    //     if (nums[start] == 0 && nums[end] != 0)
    //     {
    //         swap(nums[start], nums[end]);
    //         start++;
    //         end++;
    //     }
    //     else if (nums[start] == 0 && nums[end] == 0)
    //     {
    //         end++;
    //     }
    //     else
    //     {
    //         start++;
    //         end++;
    //     }
    // }

    int start = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[start], nums[i]);
            start++;
        }
    }
}

int main()
{
    vector<int> nums = {5, 1, 3};
    moveZeroes(nums);
    for (int v : nums)
    {
        cout << v;
    }
    cout << endl;
    return 0;
}