#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if (b * log(a) > d * log(c)) // using pow would have resulted in a very big number hence overflow.
    //  eg: pow(2,100000) but 100000*log(2) totally works
    {
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}