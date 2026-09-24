#include <iostream>
using namespace std;

int main()
{
    long n;
    cin >> n;

    int year = n / 365;
    cout << year << " years" << endl;

    int month = (n % 365) / 30;
    cout << month << " months" << endl;

    int days = (n % 365) % 30;
    cout << days << " days" << endl;

    return 0;
}