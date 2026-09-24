#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, b, c, d;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c >> d;
        int y = 0;
        int z = 0;

        if ((min(a, b) < c) && (c < max(a, b)))
        {
            // cout << "YES\n";
            y = 1;
        }
        if ((min(a, b) < d) && (d < max(a, b)))
        {
            z = 1;
        }
        if (y != z)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}