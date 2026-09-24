#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long sereja = 0;
    long long dima = 0;

    for (int i = 0; i < n; i + 2)
    {
        int l = arr[0];
        int r = arr[n-1];
        sereja += max(arr[0],arr[n-1]);
    }

    cout << sereja << dima;

    return 0;
}