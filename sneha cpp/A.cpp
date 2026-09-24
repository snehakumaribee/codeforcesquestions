#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n = 3;
    int arr[n];

    while (t--)
    {
        cin >> arr[0] >> arr[1] >> arr[2];
        int round = 0;
        if (arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2])
        {
            cout << round << '\n';
            continue;
        }

        sort(arr, arr + n);
        do
        {
            arr[2]--;
            arr[0]++;
            round++;

        } while (arr[0] != arr[1] && arr[1] != arr[2] && arr[0] != arr[2]);

        cout << round << '\n';
    }

    return 0;
}