#include <iostream>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    int left = -1, right = -1;
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (target == nums[mid])
        {
            left = mid;
            end = mid - 1;
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

    start = 0;
    end = nums.size() - 1;

    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (target == nums[mid])
        {
            right = mid;
            start = mid + 1;
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
    return {left, right};
}

int main()
{

    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 6;
    vector<int> result = searchRange(nums, target);
    for (int value : result)
    {
        cout << value;
    }
    cout << endl;
    return 0;
}