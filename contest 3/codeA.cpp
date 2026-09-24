#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int w, h;

    for (int i = 0; i < t; i++)
    {
        cin >> w >> h;
        if (w == h)
        {
            cout << "Square\n";
        }
        else
            cout << "Rectangle\n";
    }

    return 0;
}