#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;

    int dx1 = x2 - x1;
    int dx2 = x4 - x3;
    int dy1 = y2 - y1;
    int dy2 = y4 - y3;

    if (dx1 * dy2 == dy1 * dx2)
    {
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}