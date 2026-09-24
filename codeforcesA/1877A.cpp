// efficiency of team A= score of team A - score of team B(example score = 3,1);
// efficiency of A= 3-1 =2 ;   efficiency of B = 1-3 = -2;
// efficiency of A+B = 0;
// sum of efficiency of all teams = 0;
// sum of n-1 teams + 1(tofind) team = 0;
// 1(tofind) team = -sum of n-1 teams;

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
        int score;
        int sum = 0;
        while (n-- > 1)
        {
            cin >> score;
            sum += score;
        }

        cout << -sum << '\n';
    }

    return 0;
}