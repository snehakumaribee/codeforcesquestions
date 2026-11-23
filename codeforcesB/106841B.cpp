#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    string c, s;

    while (t--)
    {
        cin >> n;
        cin >> c;
        cin >> s;

        int amax = 0;
        int cmax = INT_MIN;
        for (auto x : c)
        {
            if (x == 'A')
            {
                amax++;
                cmax = max(cmax, amax);
            }
            else
                amax = 0;
        }

        amax = 0;
        int dmax = INT_MIN;
        for (auto x : s)
        {
            if (x == 'A')
            {
                amax++;
                dmax = max(dmax, amax);
            }
            else
                amax = 0;
        }

        if (cmax > dmax)
        {
            cout << "C\n";
        }
        else if (dmax > cmax)
        {
            cout << "S\n";
        }
        else
            cout << "F\n";
    }

    return 0;
}