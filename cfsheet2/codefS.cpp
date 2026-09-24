#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x, y;
    long sum = 0;

    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;
        int mini = min(x, y);
        int maxi = max(x, y);
        sum = 0;

        for (int i = mini + 1; i < maxi; i++)
        {
            if (i % 2 == 1)
            {
                sum = sum + i;
            }
        }
        cout << sum << endl;
    }

    return 0;
}