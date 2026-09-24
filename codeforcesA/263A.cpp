#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][5];
    int targeti, targetj, x;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> x;
            if (x == 1)
            {
                targeti = i;
                targetj = j;
                break;
            }
        }
    }

    int ans = abs(3 - targeti) + abs(3 - targetj);
    cout << ans;

    return 0;
}