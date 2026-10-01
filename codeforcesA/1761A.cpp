#include <bits/stdc++.h>
using namespace std;
//beech ke atleast 2 element diff krne chahiye
// n- (a+b) >=2;
//a+b <= n-2;

int main()
{
    int t;
    cin >> t;
    int n, a, b;

    while (t--)
    {
        cin >> n >> a >> b;

        if (a == n && b == n)
        {
            cout << "YES\n";
        }
        else if (a + b <= n - 2)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}