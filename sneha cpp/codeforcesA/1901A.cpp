#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, x;
    for (int i = 0; i < t; i++)
    {

        cin >> n >> x;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int first = arr[0]; // n is petrol pump number maybe 4; arr[1]==7 then 7-4= 3 but we want 4 here onlt first long distance;
        int last = 2 * (x - arr[n - 1]);
        int maxi = INT_MIN;
        maxi = max({maxi, last, first});

        int mid = INT_MIN;
        for (int i = 0; i < n - 1; i++)
        {
            mid = max(mid, (arr[i + 1] - arr[i]));
        }

        maxi = max(maxi, mid);
        cout << maxi << '\n';
    }
    return 0;
}