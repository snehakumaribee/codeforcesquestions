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
        long long sum = 0;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            sum = sum + x * x;
        }

        cout << sum << '\n';
        for (int i = 0; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << '\n';
    }

    return 0;
}