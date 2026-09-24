#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    float r;
    double pi = 3.141592653;

    cin >> r;

    double area = pi * r * r;

    cout << fixed << setprecision(9) << area;

    return 0;
}