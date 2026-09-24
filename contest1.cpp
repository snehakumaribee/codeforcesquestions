#include <iostream>
using namespace std;

int main()
{
    long t;
    int x, y;

    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cin >> x >> y;

        if (x % y==0)
        {
            cout << "YES" << '\n';
        }
        else
            cout << "NO" << '\n';
    }

    return 0;
}