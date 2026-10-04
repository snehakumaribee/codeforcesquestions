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

        int totalxor = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            totalxor ^= arr[i];
        }
        if (n % 2 == 0)
        {
            if (totalxor == 0)
            {
                cout << totalxor << '\n'; //any number print 
            }
            else
                cout << "-1\n";
        }
        else
            cout << totalxor << '\n';
    }

    return 0;
}

//tc = O(n)
//sc = O(n)