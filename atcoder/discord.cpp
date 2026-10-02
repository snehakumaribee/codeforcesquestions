#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int m;

    cin >> n >> m;

    int arr[m][n];
    bool seen[n + 1][n + 1] = {};

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
        for (int j = 0; j < n - 1; j++)
        {
            int a = arr[i][j];
            int b = arr[i][j + 1];

            seen[a][b] = true;
            seen[b][a] = true;
        }
    }

    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (!seen[i][j])
            {
                ans++;
            }
        }
    }

    cout << ans;

    return 0;
}