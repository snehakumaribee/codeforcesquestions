// first and last letter should be t and n/3 number of m;
//number of m should never be more than t from both sides;

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    string s;
    while (t--)
    {
        cin >> n;
        cin >> s;
        int mcount = 0;
        int tcount = 0;
        int yes = 0;
        if (s[0] == 'T' && s[n - 1] == 'T')
        {
            yes = 1;
            for (int i = 0; i < n - 1; i++)
            {
                if (s[i] == 'M')
                {
                    mcount++;
                }
                if (s[i] == 'T')
                {
                    tcount++;
                }
                if (mcount > tcount)
                {
                    yes = 0;
                    break;
                }
            }
            if (mcount != (n / 3))
            {
                yes = 0;
            }
            mcount = 0;
            tcount = 0;
            for (int i = n - 1; i >= 0; i--)
            {
                if (s[i] == 'M')
                {
                    mcount++;
                }
                if (s[i] == 'T')
                {
                    tcount++;
                }
                if (mcount > tcount)
                {
                    yes = 0;
                    break;
                }
            }
        }
        if (yes)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}