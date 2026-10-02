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
        int arr[n];
        int array2[101] = {}; // all values initally contains null not garbage
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            array2[arr[i]]++;
        }

        int mex1 = 0;
        int mex2 = 0;

        while (array2[mex1] >= 2)
        {
            mex1++;
        }

        while (array2[mex2] >= 1)
        {
            mex2++;
        }

        cout << mex1 + mex2 << '\n';
    }

    return 0;
}