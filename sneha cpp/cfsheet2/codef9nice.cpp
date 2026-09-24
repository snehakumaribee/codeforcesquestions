#include <iostream>
using namespace std;

int main()
{
    long n;
    cin >> n;
    int digit;
    long reverse = 0;
    long original = n;

    do
    {
        if (n % 10 == 0)
        {
            n = n / 10;
        }

    } while (n % 10 == 0);

    while (n)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    cout << reverse << endl;

    if (reverse == original)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO";

    return 0;
}