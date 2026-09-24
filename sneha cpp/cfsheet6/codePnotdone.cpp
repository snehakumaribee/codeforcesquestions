#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    int digits = 0;
    while (fact)
    {
        digits++;
        fact = fact / 10;
    }

    cout << "Number of digits of " << n << "! is " << digits;

    return 0;
} // need log cause overflow