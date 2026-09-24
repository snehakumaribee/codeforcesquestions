#include <bits/stdc++.h>
using namespace std;

void hilol(int a)
{
    for (int i = 1; i <= a; i++)
    {
        if (i == a)
        {
            cout << i;
            return;
        }
        else
            cout << i << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    hilol(n);

    return 0;
}