#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long l, r, k;

    while (t--)
    {
        cin >> l >> r >> k;

        if (l == r)
        {
            if (l == 1)
            {
                cout << "NO\n";
            }
            else
                cout << "YES\n";

            continue;
        }
        long long numsofnum = r - l + 1;
        long long numodd;
        numodd = numsofnum / 2;
        if (numsofnum % 2 == 1 && l % 2 == 1)
        {
            numodd++;
        }

        if (numodd <= k)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}