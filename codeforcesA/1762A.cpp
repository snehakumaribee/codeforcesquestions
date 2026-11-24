// 1, 3, 7, 15 , 31, 63...... 2n+1;

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
        long long arr[n];
        int odd = 0;
        // long long minodd = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 1)
            {
                odd++;
                // minodd = min(arr[i], minodd);
            }
        }
        int ans = INT_MAX;
        if (odd % 2 == 0)
        {
            cout << "0\n";
        }
        else
        {
            for (auto x : arr)
            {
                int count = 0;
                if (x % 2 == 0)
                {
                    while (x % 2 == 0)
                    {
                        x /= 2;
                        count++;
                    }
                    ans = min(ans, count);
                }
                else
                {
                    while (x % 2 != 0)
                    {
                        x /= 2;
                        count++;
                    }
                    ans = min(ans, count);
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}