#include <iostream>
#include <stack>
#include <algorithm>
#include <unordered_map>
using namespace std;

int longestValidParentheses(string s)
{

    stack<int> result;
    int currentLength = 0;
    int maxLength = 0;
    result.push(-1);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            result.push(i);
        }
        else
        {
            result.pop();
            if (result.empty())
            {
                result.push(i);
            }
            else
            {
                currentLength = i - result.top();
                maxLength = max(maxLength, currentLength);
            }
        }
    }

    return maxLength;
}

int longestValidParenthesesOptimized(string s)
{
    int left = 0, right = 0;
    int maxLength = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            left++;
        }
        else
        {
            right++;
        }

        if (right > left)
        {
            left = 0;
            right = 0;
        }
        else if (right == left)
        {
            maxLength = max(maxLength, right * 2);
        }
    }

    left = 0;
    right = 0;

    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '(')
        {
            left++;
        }
        else
        {
            right++;
        }

        if (left > right)
        {
            left = 0;
            right = 0;
        }
        else if (left == right)
        {
            maxLength = max(maxLength, left * 2);
        }
    }

    return maxLength;
}
int main()
{
    string s = "())";
    // int length = longestValidParentheses(s);
    int length = longestValidParenthesesOptimized(s);

    cout << length << endl;
    return 0;
}
