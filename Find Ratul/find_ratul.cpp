#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int isRatul = 1;
    while (ss >> word)
    {
        if (word == "Ratul")
        {
            isRatul = 0;
        }
    }

    if (isRatul == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}