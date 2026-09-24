#include <bits/stdc++.h>
using namespace std;

void hilol(int a, int arr[])
{
    if (a == 0)
    {
        return;
    }
    cout << arr[a - 1];
    hilol(a - 1, arr);
}

int main()
{
    int t;
    cin >> t;
    long long n;

    while (t--)
    {
        cin >> n;
        int arr[n];
        long long i = 0;
        if (n == 0)
        {
            cout << " ";
            break;
        }

        arr[i++] = n % 2;
        n = n / 2;

        hilol(n, arr);
    }

    return 0;
}