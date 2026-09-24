#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    string reverse(n,' ');

    for (int i = 0; i < n; i++)
    {
        reverse[i] = s[n - i - 1];
    }

    if (s == reverse)
    {
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}