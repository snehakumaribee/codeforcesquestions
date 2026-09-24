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
        std::string s;
        cin >> s;
        int hash = 0;
        int current = 0;

        for (int j = 0; j < n; j++)
        {
            if (s[j] == '#')
            {
                hash++;
                current = max(current, hash);
            }
            if (s[j] == '*')
            {
                hash = 0;
            }
        }
        cout << (current + 1) / 2 << '\n';
    }

    return 0;
}