#include <iostream>
#include <numeric>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int numsSum = accumulate(nums.begin(), nums.end(), 0);
    int actualSum = n * (n + 1) / 2;
    return actualSum - numsSum;
}

int main()
{
    vector<int> nums = {3, 0, 1};
    int result = missingNumber(nums);
    return 0;
}