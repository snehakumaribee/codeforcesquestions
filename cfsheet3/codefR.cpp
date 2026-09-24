#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        int yes = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                yes = 1;
                b[j] = 0;
                break;
            }
        }

        if (yes == 0)
        {
            cout << "no";
            return 0;
        }
    }
    cout << "yes";
    return 0;
}