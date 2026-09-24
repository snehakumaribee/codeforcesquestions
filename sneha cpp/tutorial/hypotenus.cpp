#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float length;
    float breadth;
    float hypotenus;

    cin >> length >> breadth;

    hypotenus = sqrt(pow(length, 2) + pow(breadth, 2));

    cout << hypotenus;
    return 0;
}