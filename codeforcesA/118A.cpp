#include <bits/stdc++.h>
using namespace std;

// erase vowel or just ignore them

int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);

        //     if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
        //     {
        //         s.erase(i, 1);
        //         i--;
        //     }
        //     else
        //         cout << '.' << s[i];

        //OR

        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y')
        {
            cout << '.' << s[i];
        }
    }

    return 0;
}