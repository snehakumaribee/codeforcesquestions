#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long bignumber = 1234567890123456789;
    double floatingpoint = bignumber;

    cout << "original number (integer) : " << bignumber << '\n';
    cout << "stored in double without setprecision : " << floatingpoint << '\n';

    cout << fixed << setprecision(10);
    cout << "stored in double with setprecision : " << floatingpoint << '\n';

    return 0;
}