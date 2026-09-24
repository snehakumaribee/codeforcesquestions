// if n <= 10 cout << n; for i = 2 i<n i+10

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin >> n;
        // int x = n;
        int digits = 0;
        int firstdigit = 0;
        while (n)
        {
            if (n < 10 && n > 0)
            {
                firstdigit = n;
            }

            n = n / 10;
            digits++;
        }

        cout << (digits - 1) * 9 + firstdigit << '\n';
    }

    return 0;
}