#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;

    for (int i = 0; i < t; i++)
    {
        cin >> s;
        int g = 0;
        for (int j = 0; j < s.length() - 2; j++)
        {
            if (s[j] == '1' && s[j + 1] == '0' && s[j + 2] == '1')
            {
                g = 1;
            }
            if (s[j] == '0' && s[j + 1] == '1' && s[j + 2] == '0')
            {
                g = 1;
            }
        }
        if (g)
        {
            cout << "Good\n";
        }
        else
            cout << "Bad\n";
    }

    return 0;
}