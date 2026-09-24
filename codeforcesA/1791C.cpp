// i = 0|| 1 & n-1-i  == 1||0 n-2

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
        string s;
        cin >> s;

        // for (int i = 0; i < n/2; i++)
        // {
        //     if ((s[i] == '0' && s[n - 1 - i] == '1') || (s[i] == '1' && s[n - i - 1] == '0'))   couldve been s[i]!=s[n-i-1];
        //     {
        //         n = n - 2;
        //     }
        // } we r changing n inside the loop and then our condition is also n/2 so doesnt really work

        int l = 0, u = n - 1;

        while (l < u)
        {
            if (s[l] != s[u])
            {
                n = n - 2;
                l++;
                u--;
            }
            else
                break;
        }

        cout << n << '\n'; // cout << r-l-1 << '\n;
    }

    return 0;
}