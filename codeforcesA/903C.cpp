#include <bits/stdc++.h>
using namespace std;
// somehow the answer is largest number of occurances

int main()
{
    int n;
    cin >> n;
    int count = 1;
    int ans = 1;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
        else
            count = 1;

        ans = max(ans, count);
    }

    cout << ans;

    return 0;
}