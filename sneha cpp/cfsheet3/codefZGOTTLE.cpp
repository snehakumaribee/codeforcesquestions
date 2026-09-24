#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n, q;
    cin >> n >> q;
    long long a[n];
    long long query[q];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // sort array;
    }
    sort(a, a + n);

    for (int i = 0; i < q; i++)
    {
        cin >> query[i];
        long long upperbound = n - 1, lowerbound = 0;
        int sneha = 0;

        while (upperbound >= lowerbound)
        {
            long long mid = lowerbound + (upperbound - lowerbound) / 2;
            if (a[mid] == query[i])
            {
                sneha = 1;
                break;
            }
            else if (a[mid] > query[i])
            {
                upperbound = mid - 1;
            }
            else if (a[mid] < query[i])
            {
                lowerbound = mid + 1;
            }
        }

        if (sneha)
        {
            cout << "found" << '\n';
        }
        else
            cout << "not found" << '\n';
    }

    return 0;
}