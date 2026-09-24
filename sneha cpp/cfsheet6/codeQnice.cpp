#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long l, r, m;
    cin >> l >> r >> m;
    long long product = 1;
    for (int i = l; i <= r; i++)
    {
        product = (product * i) % m;
    }

    cout << product;

    return 0;
}
//(a×b)modm=((amodm)×(bmodm))modm