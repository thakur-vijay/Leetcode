#include <iostream>
#include <stack>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<string> generateParenthesis(int n)
{

    unordered_map<char, char> validP = {'(', ')'};
    vector<string> parenthesis;

    int pCount = n * 2;
    while (true)
    {
        vector<string> p;
    }

    return parenthesis;
}

int main()
{
    vector<string> result = generateParenthesis(3);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}
