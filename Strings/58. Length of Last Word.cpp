#include <iostream>
#include <stack>
#include <algorithm>
#include <unordered_map>
using namespace std;

int lengthOfLastWord(string s)
{
    int length = 0;
    int lastLength = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            length++;
        }
        else
        {
            if (length != 0)
            {
                lastLength = length;
                length = 0;
            }
        }
    }

    if (length != 0)
    {
        lastLength = length;
    }
    return lastLength;
}

int main()
{
    string s = "luffy is still joyboy";
    int length = lengthOfLastWord(s);

    cout << length << endl;
    return 0;
}
