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
        int arr[n];
        long long balance = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            if (x > 0)
            {
                balance += x;
            }
            else if (balance >= -x)
            {
                balance += x;
            }
            else
            {
                ans += -x - balance;
                balance = 0;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}