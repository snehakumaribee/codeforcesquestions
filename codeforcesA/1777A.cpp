#include <bits/stdc++.h>
using namespace std;
//odd*odd = odd; even*even= even

int main()
{
    int t;
    cin >> t;
    int n;

    while (t--)
    {
        cin >> n;
        long long arr[n];
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] % 2 == arr[i + 1] % 2)
            {
                long long news = arr[i] * arr[i + 1];
                ans++;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}