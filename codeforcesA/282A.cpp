#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    int num = 0;

    while (n--)
    {
        cin >> s;
        if (s == "++X" || s == "X++")
        {
            num++;
        }
        else
            num--;
    }

    cout << num;

    return 0;
}