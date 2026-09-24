#include <iostream>
using namespace std;

int main()
{
    long a, b, c;
    cin >> a >> b >> c; // a= 3 ; b= -2; c= 1
    long x = a;         // x= 3
    long y = b;         // y= -2
    long z = c;         // z= 1

    if (a > b)      // 3>-2
        swap(a, b); // a = -2, b= 3
    if (a > c)      // -2> 1
        swap(a, c); // a= -2, c= 1
    if (b > c)      // 3>1
        swap(b, c); // b = 1, c= 3

    cout << a << b << c << endl;

    cout << x << y << z;

    return 0;
}