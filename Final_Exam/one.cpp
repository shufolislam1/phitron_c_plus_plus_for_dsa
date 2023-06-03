// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         string s,x;
//         cin>>s>>x;

//     }
//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

string replaceString(string str, string pattern, char replaceChar) {
    size_t pos = 0;
    while ((pos = str.find(pattern, pos)) != string::npos) {
        str.replace(pos, pattern.length(), 1, replaceChar);
        pos += 1; // Move past the replaced character
    }
    return str;
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); // Ignore the newline character after reading T

    while (T--) {
        string S, X;
        getline(cin, S, ' ');
        getline(cin, X);

        string modifiedString = replaceString(S, X, '$');
        cout << modifiedString << endl;
    }

    return 0;
}
