#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char sec;
    int math_mark;
    int eng_mark;
};
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    Student obj[n];
    for (int i = 0; i < n; i++)
    {
        // Student obj;
        cin >> obj[i].name >> obj[i].cls >> obj[i].sec >> obj[i].math_mark >> obj[i].eng_mark;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << obj[i].name << " " << obj[i].cls << " " << obj[i].sec << " " << obj[i].math_mark << " " << obj[i].eng_mark << endl;
    }
    return 0;
}
