#include <iostream>
using namespace std;

int main()
{
    int w;

    cin >> w;

    if (w > 2 && w % 2 == 0) // positive EVEN interger 2/2 = 1; 1 is ODD.
    {
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}