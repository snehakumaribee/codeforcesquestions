#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> s;

    int freq[26] = {0};

    for (char c = 'a'; c <= 'z'; c++)
    {
        for (int i = 0; i < n; i++)
        {
            if (c == s[i])
                freq[c - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if(freq>0){
            // cout << 
        }
    }
    cout << s;

    return 0;
}