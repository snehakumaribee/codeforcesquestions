#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long n;

    while (t--)
    {
        cin >> n;
        long long arr[n];
        long long sum = 0;
        long long zero = 0;
        int start = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i == n - 1) // to read aevery index we need to to read every element of array or
            {               // it reads the remaining part of array as next n;
                continue;
            }
            else if (arr[i] != 0)
            {
                start = 1; // to ignore shuru ke zeros; once a non zero element iss found, start becomes positive so now it counts zeros;
                sum = sum + arr[i];
            }
            else if (start)
            {
                zero++;
            }
        }
        cout << (sum + zero) << '\n';
    }

    return 0;
}