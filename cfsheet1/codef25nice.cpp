#include <iostream>

using namespace std;
int main()
{
    long a, b, c;

    cin >> a >> b >> c;

    /* OR
    int x = a; int y = b ; int z = c;
    if(a>b) swap(a,b)
    if(a>c) swap(a,c)
    if(b>c) swap (b,c)  codef26.cpp*/

    long minimun = min(a, min(b, c));
    long maximum = max(a, max(b, c));
    long middle = a + b + c - minimun - maximum;

    cout << minimun << endl;
    cout << middle << endl;
    cout << maximum << endl;

    cout << '\n'
         << a << '\n'
         << b << '\n'
         << c;

    return 0;
}
