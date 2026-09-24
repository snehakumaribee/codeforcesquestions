#include <iostream>
using namespace std;

int main()
{
    double temp;
    char unit;
    cout << "***** TEMPERATURE CONVERSION *****\n";
    cout << "F = Farenhite\n";
    cout << "C = celsius\n";
    cout << "choose unit you would like to convert into\n";
    cin >> unit;
    if (unit == 'F' || unit == 'f')
    {
        cout << "enter temp in celsius \n";
        cin >> temp;
        temp = (1.8 * temp) + 32.0;
        cout << "temp is : " << temp << '\n';
    }
    else if (unit == 'C' || unit == 'c')
    {
        cout << "enter temp in farenhite \n";
        cin >> temp;
        temp = (temp - 32.0) / 1.8;
        cout << "temp is : " << temp << '\n';
    }
    else
        cout << "enter valid unit C or F \n";

    cout << "**********";

    return 0;
}