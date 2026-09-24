#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    if (n == 1)
    {
        cout << "NO";
        return 0;
    }

    for (long long i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}

/*
For example, suppose n = 100.
The square root of 100 is 10.

If you didn't find any factor from 2 to 10, then there is no need to 
check 20, 25, or 50 because their partners (5, 4, 2) would already have been found.
2 × 50
4 × 25
5 × 20
10 × 10
20 × 5
25 × 4
50 × 2

*/