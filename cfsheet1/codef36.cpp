#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n < 10)
    {
        cout << "NO";
    }
    else if (n % 10 == 0)
    {
        cout << "YES";
    }
    else if ((n / 10) % (n % 10) == 0 || (n % 10) % (n / 10) == 0)
    {
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}