#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x, y, r;
    int n;
    cin >> x >> y >> r >> n;
    long x1, y1;

    for (int i = 0; i < n; i++)
    {
        cin >> x1 >> y1;
        if (((x1 - x) * (x1 - x)) + ((y1 - y) * (y1 - y)) <= (r * r))
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}