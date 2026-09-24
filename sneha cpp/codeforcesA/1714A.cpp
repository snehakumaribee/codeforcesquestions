#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, h1, m1;
    while (t--)
    {
        cin >> n >> h1 >> m1;
        int sleep = (h1 * 60) + m1;
        int h[n], m[n];
        int alarms[n];
        for (int i = 0; i < n; i++)
        {
            cin >> h[i] >> m[i];
            alarms[i] = (60 * h[i]) + m[i];
        }
        sort(alarms, alarms + n);
        int wakey = 0;
        if (alarms[n - 1] < sleep)
        {
            wakey = alarms[0];
        }
        for (int i = 0; i < n; i++)
        {
            if (alarms[i] >= sleep)
            {
                wakey = alarms[i];
                break;
            }
        }
        int time = 0;
        if (wakey >= sleep)
        {
            time = wakey - sleep;
        }
        else if (wakey < sleep)
        {
            time = (1440 - sleep) + wakey;
        }

        cout << time / 60 << " " << time % 60 << '\n';
    }

    return 0;
}