#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;

    while (t--)
    {
        cin >> n;
        int x;
        int numofodds = 0;
        while (n--)
        {
            cin >> x;
            if (x % 2 == 1)
            {
                numofodds++;
            }
        }

        if (numofodds % 2 == 1)
        {
            cout << "NO\n";
        }
        else
            cout << "YES\n";
    }

    return 0;
}