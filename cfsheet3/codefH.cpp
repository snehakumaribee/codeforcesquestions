#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        int temp;
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

/*
Index:   0   1   2   3   4
Value:  [ ] [ ] [ ] [ ] [ ]
                     ^
                 last element

There is no a[5].

Your program walks outside the array and starts reading memory that doesn't belong to it.

That's called undefined behavior.
*/