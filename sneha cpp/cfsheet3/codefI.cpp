#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int j = 1; j <= n; j++)
        {
            cin >> a[j];
        }
        long result = LONG_MAX;
        //  Ai + Aj + j - i

        long hi;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                long hi = (a[i] + a[j] + j - i);
                result = min(result, hi);
            }
        }

        cout << result << '\n';
    }

    return 0;
}