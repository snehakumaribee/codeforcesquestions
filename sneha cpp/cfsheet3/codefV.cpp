#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    int ans[m+1];

    for (int i = 1; i <= m; i++)
    {
        ans[i] = 0;
    }

    for (int j = 0; j < n; j++)
    {
        cin >> a[j];
        int x = a[j];
        ans[x]++;
    }

    for (int i = 1; i <= m; i++)
    {
        cout << ans[i] << '\n';
    }

    return 0;
}