#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char sec;
    int id;
};
int main()
{
    int n;
    cin >> n;
    int start = 0;
    int end = n - 1;
    cin.ignore();
    Student obj[n];
    for (int i = 0; i < n; i++)
    {
        // Student obj;
        cin >> obj[i].name >> obj[i].cls >> obj[i].sec >> obj[i].id;
    }
    while (start < end)
    {

        int temp = obj[start].id;
        obj[start].id = obj[end].id;
        obj[end].id = temp;

        start++;
        end--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << obj[i].name << " " << obj[i].cls << " " << obj[i].sec << " " << obj[i].id << endl;
    }
    return 0;
}
