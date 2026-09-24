// print min and max among the three

#include <iostream>
using namespace std;

// 4 3 8

int main()
{

    long long a, b, c;

    cin >> a >> b >> c;

    long long mx = max(a, max(b, c));
    long long mn = min(a, min(b, c));

    cout << mn << " " << mx;
    return 0;
}