// if n <=3 cout 3, if n%2==0 num of 1 and -1 should be n/2 each or not necessary if -1<=n/2 zero operation if -1> n/2 the  number of
//  number of -1 - n/2,  if n is odd, -1 <= n/2 if not number of -1 - n/2

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
        int count = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == -1)
            {
                count++;
            }
        }
        if(count > n/2){
            ans = count - n/2;
            count = n/2;
        }
        if(count %2 != 0){
            ans += 1;
            count -= 1;
        }
        cout << ans << '\n';
        
        // if(count %2 != 0){
        //     count += 1;
        // }
        // if (n <= 3)
        // {
        //     cout << count << '\n';
        // }
        // else if (count <= n / 2 && count % 2 == 0)
        // {
        //     cout << "0\n";
        // }
        // else if (count <= n / 2 && count % 2 != 0)
        // {
        //     cout << '1\n';
        // }
        // else if (count >= n / 2 && count % 2 == 0)
        // {
        //     cout << count - n / 2 << '\n';
        // }
        // else if (count >= n && count % 2 !=)
        // {
        //     cout << count - n / 2 + 1 << '\n';
        // } like 1 hr taken
    }

    return 0;
}