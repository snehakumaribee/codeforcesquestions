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
        long long maxi = INT_MIN;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            maxi = max(maxi, arr[i]);
        }

        vector<long long> b;
        vector<long long> c;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == maxi)
            {
                c.push_back(arr[i]);
            }
            else
                b.push_back(arr[i]);
        }

        if (b.empty())
        {
            cout << "-1\n";
        }
        else
        {
            cout << b.size() << " " << c.size() << "\n";
            for (auto it : b)
            {
                cout << it << " ";
            }
            cout << endl;
            for (auto it : c)
            {
                cout << it << " ";
            }
            cout << endl;
        }
    }

    return 0;
}

//tc = O(n);
//sc = O(n);