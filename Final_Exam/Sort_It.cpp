#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char sec;
    int id;
    int math_mark;
    int eng_mark;
};
int main()
{
    int n;
    cin >> n;
    Student obj[n];
    for (int i = 0; i < n; i++)
    {
        cin >> obj[i].name >> obj[i].cls >> obj[i].sec >> obj[i].id >> obj[i].math_mark >> obj[i].eng_mark;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((obj[i].eng_mark + obj[i].math_mark) < (obj[j].eng_mark + obj[j].math_mark) || ((obj[i].eng_mark + obj[i].math_mark) == (obj[j].eng_mark + obj[j].math_mark) && obj[i].id > obj[j].id))
            {
                swap(obj[i], obj[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << obj[i].name << " " << obj[i].cls << " " << obj[i].sec << " " << obj[i].id << " " <<     
        obj[i].math_mark << " " << obj[i].eng_mark << endl;
    }
    return 0;
}