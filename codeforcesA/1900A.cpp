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
        string s;
        cin >> s;
        int count = 0;
        int key1 = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == '.')
            {
                count++;
            }
            else if (s[j] == '#')
            {
                if (count == 1)
                {
                    key1 = key1 + 1;
                }
                if (count == 2)
                {
                    key1 = key1 + 2;
                }
                if (count >= 3)
                {
                    key1 = 2;
                    break;
                }

                count = 0;
            }

            cout << key1 << '\n';
        }

        return 0;
    }