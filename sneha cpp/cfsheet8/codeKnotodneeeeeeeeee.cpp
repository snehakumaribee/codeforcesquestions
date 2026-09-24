#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long fabo[51];
    int n;

    fabo[1] = 0;
    fabo[2] = 1;
    for (int i = 3; i < 51; i++)
    {
        fabo[i] = fabo[i - 1] + fabo[i - 2];
    }

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int yes = 1;

        if (fabo[n] == 1 || fabo[n] == 0)
        {
            yes = 0;
        }

        for (long long j = 2; j * j <= fabo[n]; j++)
        {
            if (fabo[n] % j == 0)
            {
                yes = 0;
                break;
            }
        }

        if (yes)
        {
            cout << "prime\n";
        }
        else
            cout << "not prime\n";
    }

    return 0;
}