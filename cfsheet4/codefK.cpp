#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s, t;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> t;
        string ans;
        // int ss = s.length();
        // int tt = t.length();
        // int maxi = max(ss, tt);

        for (int j = 0; j < max(s.length(), t.length()); j++)
        {
            if (j < s.length())
                ans += s[j];

            if (j < t.length())
                ans += t[j];
        }

        cout << ans << '\n';
        ans;
    }

    return 0;
}