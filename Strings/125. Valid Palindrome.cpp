#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

bool isPalindrome(string s)
{
    int start = 0, end = s.size() - 1;
    while (start < end)
    {
        if (!isalnum(s[start]))
        {
            start++;
            continue;
        }

        if (!isalnum(s[end]))
        {
            end--;
            continue;
        }

        if (tolower(s[start]) != tolower(s[end]))
        {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main()
{
    string s = "a";
    bool valid = isPalindrome(s);

    cout << endl
         << valid << endl;
    cout << ('A' == 'a') << endl;
    return 0;
}
