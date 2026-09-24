#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
        {
            cout << 0;
            return 0;
        }
        if (arr[i] < 0)
        {
            arr[i] = arr[i] * -1;
        }
        mini = min(mini, (arr[i]));
    }
    cout << mini;

    return 0;
}