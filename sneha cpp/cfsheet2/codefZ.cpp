#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, s;
    cin >> k >> s;
    int count = 0;

    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            /*for (int l = 0; l <= k; l++)
            {
                if (i + j + l == s)
                {
                    count++;
                }
            } TIME COMPLEXITY n^3*/

            int l = s - i - j;
            if (0 <= l && l <= k)
            {
                count++;
            }
        }
    }
    cout << count;

    return 0;
}