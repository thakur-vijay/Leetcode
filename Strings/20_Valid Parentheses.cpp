#include <iostream>
#include <stack>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool isValid(string s)
{
    // )(){}
    unordered_map<char, char> braces = {{'(', ')'}, {'{', '}'}, {'[', ']'}};
    stack<char> st;

    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        bool isOpening = braces.find(ch) != braces.end();

        if (isOpening)
        {
            st.push(ch);
        }
        else
        {
            if (st.empty() || braces[st.top()] != ch)
            {
                return false;
            }

            st.pop();
        }
        // else
        // {
        //     if (!st.empty() && braces[st.top()] == ch)
        //     {
        //         st.pop();
        //     }
        //     else
        //     {
        //         st.push(ch);
        //     }
        // }
    }

    return st.empty();
}

int main()
{
    string s = ")(){}";
    bool result = isValid(s);
    cout << result << endl;
    return 0;
}
