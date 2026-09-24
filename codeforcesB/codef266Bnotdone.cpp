#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    std::string s;
    cin >> s;

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < t; j++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i + 1]);
            }
        }
    }

    cout << s;

    return 0;
}