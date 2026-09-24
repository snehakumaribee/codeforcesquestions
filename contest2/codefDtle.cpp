#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long l, r;
    long long sum;

    for (int i = 0; i < t; i++)
    {
        cin >> l >> r;
        long mini = min(l,r);
        long maxi = max(l,r);
        sum = 0;
        for (long j = mini; j <= maxi; j++)
        {
            sum = sum + j;
        }
        cout << sum << endl;
    }

    return 0;
}