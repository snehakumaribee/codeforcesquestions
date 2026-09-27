#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long org = n;

    int digits = 0;
    while (n >= 10)
    {
        digits++;
        n = n / 10;
    }
    n = n + 1;

    while (digits)
    {
        n = (n) * 10;
        digits--;
    }

    cout << n - org;

    return 0;
}