#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char arr[10][10];
        int sum = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == 'X')
                {
                    int now = min({i, j, (9 - i), (9 - j)});
                    sum += now + 1;
                }
            }
        }
        cout << sum << '\n';
    }

    return 0;
}