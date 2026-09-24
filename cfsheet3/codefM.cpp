#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int mini = INT_MAX;
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > maxi)
        {
            maxi = a[i];
        }
        if (a[i] < mini)
        {
            mini = a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == maxi)
        {
            a[i] = mini;
        }
        else if (a[i] == mini) // 2 ifs swaps value again so no;
        {
            a[i] = maxi;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}