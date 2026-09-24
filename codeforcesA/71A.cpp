#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;

    while (n--)
    {
        cin >> s;
        int count = 0;
        if (s.length() <= 10)
        {
            cout << s << '\n';
        }
        else
        {
            // for (int i = 1; i < s.length() - 1; i++)
            // {
            //     count++;
            // }
            // cout << s[0] << count << s[n - 1] << '\n';
            cout << s[0] << s.length() - 2 << s[s.length()-1] << '\n';
        }
    }

    return 0;
}