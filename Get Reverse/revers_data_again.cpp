#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int math_marks;
    int eng_mark; // See the question
};
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].math_marks >> a[i].eng_mark;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].math_marks << " " << a[i].eng_mark << endl;
    }
    return 0;
}