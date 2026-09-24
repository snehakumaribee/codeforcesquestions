// if a= b and c is even second wins if c is odd first wins;;  c= c-|a-b| if c is negative bigger n wins
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int win = 1;
        // c = c - abs(a-b);
        while (c)
        {
            a--;
            if (a == 0)
            {
                c--;
            }
            win = 1;
            if (c == 0)
            {
                break;
            }
            b--;
            if (b == 0)
            {
                c--;
            }
            win = 2;
        }
        if (win == 1)
        {
            cout << "first\n";
        }
        else
            cout << "second\n";
    }

    return 0;
}