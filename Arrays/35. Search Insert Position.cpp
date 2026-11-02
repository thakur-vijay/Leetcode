#include <iostream>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{

    int start = 0;
    int end = nums.size() - 1;
    while (start <= end)
    {
        int mid = (end - start) + (start / 2);
        if (target == nums[mid])
        {
            return mid;
        }
        else if (target > nums[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return start;
}

int main()
{

    vector<int> nums = {1, 3, 5, 6, 7};
    int target = 4;
    int result = searchInsert(nums, target);
    cout << "result is " << result << endl;
    return 0;
}