#include <iostream>
#include <stack>
#include <algorithm>
#include <unordered_map>
using namespace std;

int strStr(string haystack, string needle)
{
    if (haystack.size() < needle.size())
    {
        return -1;
    }
    for (int i = 0; i <= haystack.size() - needle.size(); i++)
    {
        bool isMatched = true;
        for (int j = 0; j < needle.size(); j++)
        {
            if (haystack[i + j] != needle[j])
            {
                isMatched = false;
                break;
            }
        }
        if (isMatched)
        {
            return i;
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

// haystack = "mississippi";

// needle = "issip";
/*
first loop chlega with m, inner loop start hoga and 5 waar chlega,
inner loop pehli waar chla, condition mein gya
if (haystack[i + j] != needle[j]),
abb yaha i = 0, j = 0, means haystack[0] = m, needle[0] = i, match nhi hui, poori loop break ho gyi, 5 waar chlni thhi, but nhi chli,
second loop chlega with i, innter loop start hoga and 5 waar chlega,
inner loop pehli waar chla, condition mein gya
if (haystack[i + j] != needle[j]),
abb yaha i = 1, j = 0, means haystack[1] = i, needle[0] = i, match hogya,
inner loop second time chli
*/