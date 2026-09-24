#include <bits/stdc++.h>
using namespace std;
void yay(int a, int arr[])
{
    if (a == 0)
    {
        return;
    }
    if ((a - 1) % 2 == 0)
    {
        cout << arr[a - 1] << " ";
    }
    yay(a - 1, arr);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // for (int i = n - 1; i >= 0; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         cout << arr[i] << " ";
    //     }
    // }
    yay(n, arr);

    return 0;
}