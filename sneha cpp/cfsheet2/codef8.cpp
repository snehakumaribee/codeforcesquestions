#include <iostream>
using namespace std;

int main()
{
    long n;
    cin >> n;
    int prime = 0;

    if (n == 1)
    {
        cout << "NO";
        return 0;
    }

    for (long i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}