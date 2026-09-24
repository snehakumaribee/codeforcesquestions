#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int maxi = 0;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxi = max(maxi, a[i]);
    }

    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + (maxi - a[i]);
    }

    cout << sum;

    return 0;
}