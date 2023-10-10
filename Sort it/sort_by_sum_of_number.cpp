#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};
bool cmp(Student a, Student b)
{
    int aTotal = a.math_marks + a.eng_marks;
    int bTotal = b.math_marks + b.eng_marks;
    if (aTotal == bTotal)
    {
        if (a.id < b.id)
            return true;
        else
            return false;
    }
    else
    {
        if (aTotal > bTotal)
            return true;
        else
            return false;
    }
}
int main()
{
    int n;
    cin >> n;
    Student arry[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arry[i].nm >> arry[i].cls >> arry[i].s >> arry[i].id >> arry[i].math_marks >> arry[i].eng_marks;
    }
    // sorting
    sort(arry, arry + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << arry[i].nm << " " << arry[i].cls << " " << arry[i].s << " " << arry[i].id << " " << arry[i].math_marks << " " << arry[i].eng_marks << endl;
    }
    return 0;
}