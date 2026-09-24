#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][3];
    int prob = 0;
    
    for (int i = 0; i < n; i++)
    {
        int one = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                one++;
            }
        }
        if (one > 1)
        {
            prob++;
        }
    }
    cout << prob;

    return 0;
}