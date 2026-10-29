#include <iostream>
using namespace std;

string longestPalindrome(string s)
{

    int start = 0;
    int count = s.size();
    int maxLength = 0;
    // racecar
    for (int i = 0; i < count; i++)
    {
        int center = i;
        int left = i;
        int right = i;

        while ((left >= 0 && right < count) && (s[left] == s[right]))
        {
            left--;
            right++;
        }

        int lpLength = right - left - 1;
        if (lpLength > maxLength)
        {
            maxLength = lpLength;
            start = right - maxLength;
        }
    }

    return s.substr(start, maxLength);
}

int main()
{
    // cbbd
    string s = "cbbd";

    string lp = longestPalindrome(s);
    cout << lp << endl;
    return 0;
}