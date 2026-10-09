#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        // if (arr[i + 1] - arr[i] == 1 || arr[i + 1] - arr[i] == -1)
        // {
        v.push_back(arr[i]);
        // }
        if (arr[i + 1] > arr[i])
        {
            for (int j = arr[i] + 1; j < arr[i + 1]; j++)
            {
                v.push_back(j);
            }
        }
        else
        {
            for (int j = arr[i] - 1; j > arr[i + 1]; j--)
            {
                v.push_back(j);
            }
        }

    }
    v.push_back(arr[n-1]);

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}