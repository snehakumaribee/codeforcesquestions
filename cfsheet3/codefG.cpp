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

    int rev[n];
    int j = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        rev[j] = arr[i];
        j++;
    }

    for (int i = 0; i < n; i++)
    {
        if (rev[i] != arr[i])
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}