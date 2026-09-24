#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, x;
    cin >> a >> b >> x;
    long long sum = 0;
    for (int i = a; i <= b; i++)
    {
        if (i % x == 0)
        {
            sum += i;
        }
    }
    cout << sum;

    return 0;
}