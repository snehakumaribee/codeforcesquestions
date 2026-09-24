#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int input;
    int prev;
    int num = 1;

    cin >> prev;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> input;
        if (input != prev)
        {
            num++;
            prev = input;
        }
    }

    cout << num;

    return 0;
}