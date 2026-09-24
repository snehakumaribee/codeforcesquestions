#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int temp = n / 1000;

    if (temp % 2 == 0 && temp != 1)
    {
        cout << "EVEN";
    }
    else
        cout << "ODD";

    return 0;
}