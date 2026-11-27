#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll num1, ll num2)
{
    if (num1 == 0)
    {
        return num2;
    }
    return gcd(num2 % num1, num1);
}

int main()
{
    int n;
    cin >> n;
    ll arr[n], pos[n], count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        pos[i] = 0;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (gcd(arr[i], arr[i + 1]) != 1)
        {
            pos[i] = 1;
            count++;
        }
    }

    cout << count << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        if (pos[i])
        {
            cout << "1 ";
        }
    }
    cout << "\n";

    return 0;
}