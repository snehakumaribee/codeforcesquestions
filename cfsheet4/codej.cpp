#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (char c = 'a'; c <= 'z'; c++)
    {
        long x = 0;
        for (long i = 0; i < s.length(); i++)
        {
            if (s[i] == c)
            {
                x++;
            }
        }
        if (x > 0)
        {
            cout << c << " : " << x << '\n'; //   : inside ' ' gives you garbage cause ' ' is meant for single char not string;
        }
    }

    return 0;
}