#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    // x.a + y.b =n;
    ll n, a, b;
    cin >> n >> a >> b;
    ll y, x = -1;

    for (y = 0; y <= 1e7; y++)//for every unique y we r finding its unique equivalent x 
    {
        if ((n - y * b) % a == 0 && n - y * b >= 0)//if x is a positive integer
        {
            x = (n - y * b) / a;
            break;
        }
    }

    if (x == -1)
    {
        cout << "NO\n";
    }
    else
        cout << "YES\n" << x << " " << y << endl;

    return 0;
}