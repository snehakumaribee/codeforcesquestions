#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    long l = max(l1, l2);
    long r = min(r1, r2);

    if (l > r)
    {
        cout << "-1";
    }
    else
        cout << l << " " << r;

    return 0;
}