#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

// int lengthOfLongestSubstring(string s)
// {

//     int maxSize = 1;

//     int start = 0, end = 0;
//     // pwwkew
//     unordered_set<char> window;
//     while (end < s.size())
//     {
//         char c = s[end];
//         bool charExists = window.find(c) != window.end();

//         if (charExists)
//         {
//             window.erase(s[start]);
//             start++;
//         }
//         else
//         {
//             window.insert(c);
//             end++;
//             maxSize = max(maxSize, end - start);
//         }
//     }

//     return maxSize;
// }

int lengthOfLongestSubstring(string s)
{
    int lastSeen[128];
    fill(lastSeen, lastSeen + 128, -1);

    int maxSize = 0, start = 0;

    for (int end = 0; end < s.size(); end++)
    {
        char c = s[end];

        if (lastSeen[c] >= start)
        {
            start = lastSeen[c] + 1;
        }

        lastSeen[c] = end;
        maxSize = max(maxSize, end - start + 1);
    }

    return maxSize;
}

int main()
{
    string s = "bbbbbbb";
    int value = lengthOfLongestSubstring(s);
    cout << value << endl;
    return 0;
}
