#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<string> findWords(vector<string> &words)
{
    unordered_map<char, int> alphabets = {
        // First Row
        {'q', 1},
        {'w', 1},
        {'e', 1},
        {'r', 1},
        {'t', 1},
        {'y', 1},
        {'u', 1},
        {'i', 1},
        {'o', 1},
        {'p', 1},

        // Second Row
        {'a', 2},
        {'s', 2},
        {'d', 2},
        {'f', 2},
        {'g', 2},
        {'h', 2},
        {'j', 2},
        {'k', 2},
        {'l', 2},

        // Third Row
        {'z', 3},
        {'x', 3},
        {'c', 3},
        {'v', 3},
        {'b', 3},
        {'n', 3},
        {'m', 3}};

    vector<string> result;

    for (int i = 0; i < words.size(); i++)
    {
        string word = words[i];

        int row = 0;

        for (int j = 0; j < word.size(); j++)
        {
            char ch = tolower(word[j]);
            int currentRow = alphabets[ch];
            cout << "-----BEFORE--------" << endl;
            cout << "Current Char " << ch << endl;
            cout << "Current Row " << currentRow << endl;
            cout << "Row " << row << endl;

            if (row == 0)
            {
                row = currentRow;
            }
            else if (row != currentRow)
            {
                row = 0;
                break;
            }

            cout << "-----AFTER--------" << endl;
            cout << "Row " << row << endl;
        }

        if (row != 0)
        {
            result.push_back(word);
            cout << "-----AFTER RESULT--------" << endl;
            for (int i = 0; i < result.size(); i++)
            {
                cout << result[i] << endl;
            }
        }
    }

    return result;
}

int main()
{
    vector<string> words = {"Hello", "Alaska", "Dad", "Peace"};
    vector<string> validWords = findWords(words);
    for (int i = 0; i < validWords.size(); i++)
    {
        cout << validWords[i] << endl;
    }

    return 0;
}
