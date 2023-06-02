#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int count = 0, flag = 0;
    while (ss >> word)
    {
        for (int i = 0; i < word.size(); i++)
        {
            // cout << word[i] << endl;
            if ((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z'))
            {
                flag++;
            }
        }
        if (flag > 0)
        {
            count++;
        }
        flag = 0;
    }
    cout << count << endl;
    return 0;
}