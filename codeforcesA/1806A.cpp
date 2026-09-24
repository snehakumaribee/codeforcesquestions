#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    long long a, b, c, d;

    while (t--)
    {
        cin >> a >> b >> c >> d;
        long long x = c - a;
        long long y = d - b;

        if (y < 0)
        {
            cout << "-1\n";
        }
        else if (x > y)
        {
            cout << "-1\n";
        }
        else
            // a = a + y;
            // y = y + (c - a);
            cout << y + (y - x) << "\n"; //upar gye + (y upar jaake x kitna gye)
    }

    return 0;
}