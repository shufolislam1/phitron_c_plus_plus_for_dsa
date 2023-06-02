#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    bool isFirstWord = true; // Flag variable to track the first word
    // The isFirstWord flag is used to ensure that there is no space before the first word.
    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        if (isFirstWord)
        {
            cout << word;
            isFirstWord = false;
        }
        else
        {
            cout << " " << word;   //space tarpor word
        }
    }
    cout << endl;
    return 0;
}
