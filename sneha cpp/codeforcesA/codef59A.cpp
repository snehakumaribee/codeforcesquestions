#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> s;

    int up = 0;
    int low = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            up++;
        }
        if (s[i] >= 97 && s[i] <= 122)
        {
            low++;
        }
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (low >= up)
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                s[i] += 32;
            }
        }
        if (up > low)
        {
            if (s[i] >= 97 && s[i] <= 122)
            {
                s[i] -= 32;
            }
        }
    }
    cout << s;

    return 0;
}