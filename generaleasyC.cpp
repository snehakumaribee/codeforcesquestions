#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int a, b;
    cin >> a >> b;
    int arr[a];
    int brr[b];
    long long sum1 = 0;
    long long sum2 = 0;

    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
        sum1 += arr[i];
    }

    for (int i = 0; i < b; i++)
    {
        cin >> brr[i];
        sum2 += brr[i];
    }

    if (sum1 == sum2)
    {
        cout << "Yes";
    }
    else
        cout << "No";

    return 0;
}