#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool isAnagram(string s, string t)
{

    if (t.size() != s.size())
    {
        return false;
    }

    unordered_map<char, int> sFrequency;
    unordered_map<char, int> tFrequency;

    for (int i = 0; i < s.size(); i++)
    {
        sFrequency[s[i]]++;
    }

    for (int i = 0; i < t.size(); i++)
    {
        tFrequency[t[i]]++;
    }

    return tFrequency == sFrequency;
}

int main()
{
    string s = "anagram";
    string t = "nagaram";
    bool valid = isAnagram(s, t);
    cout << valid << endl;
    return 0;
}
