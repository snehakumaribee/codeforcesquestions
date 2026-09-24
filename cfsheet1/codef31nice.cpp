#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int lucky[] = {
        4,
        7,
        47,
        44,
        77,
        74,
        444,
        447,
        477,
        474,
        744,
        747,
        777,
        774,
    };

    for (int i = 0; i <= 13; i++)
    {

        if (n % lucky[i] == 0)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}