#include <iostream>
using namespace std;

int main()
{
    float x;
    cin >> x;

    int n = (int)x;
    float deci = x - n;

    if (deci != 0)
    {
        cout << "float " << n << " " << deci;
    }
    else
        cout << "int " << n;

    return 0;
}