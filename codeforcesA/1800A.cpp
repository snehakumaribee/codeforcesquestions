#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    string s;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> s;
        string newstring;
        // newstring = newstring + s[0];
        for (int j = 0; j < n; j++)
        {
            s[j] = tolower(s[j]);
            if (j==0||s[j] != s[j - 1])
            {
                newstring = newstring + s[j];
            }
        }

        if (newstring == "meow")
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}