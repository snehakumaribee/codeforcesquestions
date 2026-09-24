#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int year = 0;

    while (x <= y)
    {
        x = 3 * x;
        y = 2 * y;
        year++;
    }
    cout << year;

    return 0;
}