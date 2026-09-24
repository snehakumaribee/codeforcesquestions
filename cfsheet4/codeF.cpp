#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;

    for (int i = 0; i < t; i++)
    {
        cin >> s;
        int n = s.length();
        if (s.length() <= 10)
        {
            cout << s << '\n';
        }
        else
            cout << s[0] << s.length() - 2 << s[n-1] << '\n';
    }

    return 0;
}