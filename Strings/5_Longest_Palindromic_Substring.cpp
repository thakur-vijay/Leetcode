#include <iostream>
using namespace std;

void goLeftAndRight(const string &s, int count, int i, int &maxLength, int &start, bool isEven)
{
    int center = i;
    int left = i;
    int right = isEven ? i + 1 : i;
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

string longestPalindrome(string s)
{

    int start = 0;
    int count = s.size();

    if (count == 0)
    {
        return "";
    }

    int maxLength = 0;

    for (int i = 0; i < count; i++)
    {
        goLeftAndRight(s, count, i, maxLength, start, false);
        goLeftAndRight(s, count, i, maxLength, start, true);
    }
    return s.substr(start, maxLength);
}

int main()
{
    // cbbd
    string s = "bb";

    string lp = longestPalindrome(s);
    cout << lp << endl;
    return 0;
}