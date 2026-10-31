#include <iostream>
#include <stack>
#include <algorithm>
#include <unordered_map>
using namespace std;

// int strStr(string haystack, string needle)
// {
//     if (haystack.size() < needle.size())
//     {
//         return -1;
//     }
//     for (int i = 0; i <= haystack.size() - needle.size(); i++)
//     {
//         bool isMatched = true;
//         for (int j = 0; j < needle.size(); j++)
//         {
//             if (haystack[i + j] != needle[j])
//             {
//                 isMatched = false;
//                 break;
//             }
//         }
//         if (isMatched)
//         {
//             return i;
//         }
//     }

//     return -1;
// }

vector<int> getLPS(string pattern, int size)
{
    vector<int> lps(size, 0);
    int len = 0;
    int i = 1;
    while (i < size)
    {
        if (pattern[i] == pattern[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }

    return lps;
}
int strStr(string haystack, string needle)
{
    int n = needle.size();
    vector<int> lps = getLPS(needle, n);
    int i = 0, j = 0;

    while (i < haystack.size())
    {
        if (haystack[i] != lps[j])
        {
            if (j != 0)
            {
                j = lps[j - 1];
            }
            else
            {
                i++;
            }
        }
        else
        {
            i++;
            j++;
        }
    }
    return -1;
}

int main()
{
    string haystack = "mississippi", needle = "issipi";
    int index = strStr(haystack, needle);
    cout << index << endl;
    return 0;
}
