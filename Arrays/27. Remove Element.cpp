#include <iostream>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
    int start = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
        {
            swap(nums[start], nums[i]);
            start++;
        }
    }
    return start;
}

int main()
{

    vector<int> nums = {1, 2};
    int result = removeElement(nums, 1);
    cout << "Actual Length" << result << endl;
    return 0;
}