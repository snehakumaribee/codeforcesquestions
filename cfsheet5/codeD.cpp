#include <bits/stdc++.h>
using namespace std;
void func(long long n)
{
    int yes = 0;
    if (n < 2)
    {
        cout << "NO\n";
        return;
    }
    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            yes = 1;
        }
    }
    if (yes)
    {
        cout << "NO\n";
    }
    else
        cout << "YES\n";
}

int main()
{
    int t;
    cin >> t;
    long long n;

    while (t--)
    {
        cin >> n;
        func(n);
    }
    return 0;
}