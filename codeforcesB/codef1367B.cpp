#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int a[n];
        int time = 0, odd = 0, even = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
            if (a[j] % 2 == 1 && j % 2 == 0)
            {
                odd++;
            }
            else if (a[j] % 2 == 0 && j % 2 == 1)
            {
                even++;
            }
            // if (even == odd)
            // {
            //     time++;
            // }
        }
        if (even != odd)
        {
            cout << "-1" << '\n';
            ;
        }
        else
            cout << odd << '\n';
    }

    return 0;
}

/*
// if (even == odd)
    // {
    //     time++;
   // }
Now let's look at a case where it breaks.
n = 6
1 2 4 5 6 7

Only the first two positions are wrong.

Walk through your code:

j	odd	even	even==odd?	time
0	1	0	No	0
1	1	1	Yes	1
2	1	1	Yes ❌	2
3	1	1	Yes ❌	3
4	1	1	Yes ❌	4
5	1	1	Yes ❌	5

Your answer becomes 5.

The correct answer is 1.
*/