#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;

    while (t--)
    {
        cin >> n;
        string s;
        cin >> s;
        string s2;

        // cout << s2.length();

        int freq[26] = {0};
        for (int i = 1; i < n - 1; i++)
        {
            freq[s[i] - 'a']++;
        }
        int yes = 0;

        for (int i = 0; i < 26; i++)
        {
            if (freq[i] == 1)
            {
                yes = 1;
                break;
            }
        }
        if (yes)
        {
            for (int i = 0; i < n; i++)
            {
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (i == 0 || s[i] != s[i - 1])
            {
                s2 = s2 + s[i];
            }
        }

        if (yes)
        {
            cout << (s2.length() - 1) << '\n';
        }
        else
            cout << s.length() << '\n';
    }

    return 0;
}