// Only one line containing the following space-separated values: int, long long, char, float and double respectively.
// Print each element on a new line in the same order it was received as input.

#include <iostream>
using namespace std;

int main()
{

    int a;
    long long b;
    char c;
    float d;
    double e;

    cin >> a >> b >> c >> d >> e;
    cout << a << '\n'
         << b << '\n'
         << c << '\n'
         << d << '\n'
         << e;

    return 0;
}