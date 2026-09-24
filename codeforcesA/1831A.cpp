#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int maxi = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            maxi = max(maxi, arr[i]);
        }

        // int newarr[n];
        // for (int i = 0; i < n; i++)
        // {
        //     newarr[i] = maxi + 1 - arr[i];
        // }
        for (int i = 0; i < n; i++)
        {
            cout << maxi + 1 - arr[i] << ' ';
        }

        cout << '\n';
    }

    return 0;
}