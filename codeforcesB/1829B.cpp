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
        int arr[n];
        int maxi = 0;
        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
            {
                temp++;
                maxi = max(maxi, temp);
            }
            else
                temp = 0;
        }

        cout << maxi << '\n';
    }

    return 0;
}