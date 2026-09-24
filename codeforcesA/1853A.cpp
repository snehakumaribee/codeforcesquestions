// difference of corresponding elements in a sorted array should be positive or equal
// for it to be unsorted we need a negative differnce
// 9 14 difference = 5, in one movement- 10 13 ; difference dropped by 2;
// so divide by two untill difference is negative
// for even 8 10 difference 2; 2/2= 0 still equal h add 1 operation to make difference negative
// in odds 9 12 difference is 3; 3/2 = 1; ek aur operation krna hoga toh make it differnce -1 so n/2 +1;

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
        int diff = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int yes = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                yes = 0;
                // cout << "0\n";      yeh krne pe loop toh break hoga but diff last wala stored reh jayega
                // break;         and last line me implement krke same answer aa jayega, thats why we need a flag as in yes = 0;
            }
            diff = min(diff, arr[i + 1] - arr[i]);
        }
        if (yes == 0)
        {
            cout << "0\n";
        }
        else
            cout << diff / 2 + 1 << '\n';
    }

    return 0;
}