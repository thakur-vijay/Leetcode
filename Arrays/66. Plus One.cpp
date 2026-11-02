#include <iostream>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    int carry = 1;
    for (int i = digits.size() - 1; i >= 0; i--)
    {
        if (digits[i] == 9)
        {
            if (carry == 0)
            {
                return digits;
            }
            else
            {
                digits[i] = 0;
                carry = 1;
            }
        }
        else
        {
            digits[i] += 1;
            return digits;
        }
    }

    if (carry == 1)
    {
        digits.insert(digits.begin(), 1);
    }
    return digits;
}

int main()
{
    vector<int> digits = {9, 9};
    vector<int> result = plusOne(digits);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
    }

    return 0;
}