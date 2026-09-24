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
        // long long arr[n];
        long long first, last, x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (i == 0)
            {
                first = x;
            }
            if (i == n - 1)
            {
                last = x;
            }
        }

        // cout << std::gcd(arr[0], arr[n - 1]);
        if (n == 1)
        {
            cout << first << '\n';
        }
        else
        {
            while (last != 0)
            {
                long long temp = last;
                last = first % last;
                first = temp;
            }
            cout << first << '\n';
        }
    }

    return 0;
}

/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        long long first, last, x;

        cin >> first;

        for (int i = 1; i < n; i++)
        {
            cin >> x;
            if (i == n - 1)
                last = x;
        }

        if (n == 1)
            cout << first << '\n';
        else
            cout << gcd(first, last) << '\n';
    }

    return 0;
}*/