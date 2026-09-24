#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;

    while (t--)
    {
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int count = 1;
        sort(arr, arr + n);

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] != arr[i + 1])
            {
                count++;
            }
        }
        int numc = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == arr[0])
            {
                numc++;
            }
        }

        int freq = n - numc;

        if (count > 2)
        {
            cout << "NO\n";
        }
        else if (count == 1)
        {
            cout << "YES\n";
        }
        else if (abs(freq - numc) <= 1)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}