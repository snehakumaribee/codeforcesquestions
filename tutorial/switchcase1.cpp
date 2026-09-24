// to check one condition among options and return output

#include <iostream>
using namespace std;

int main()
{
    int month;
    cout << "enter the month number: ";
    cin >> month;

    switch (month)
    {
    case 1:   // can be case 'a':   can be anything after case (...):
        cout << "january";
        break;
    case 2:
        cout << "february";
        break;
    case 3:
        cout << "march";
        break;
    case 4:
        cout << "april";
        break;

    default: // when nothing matches this is the default return
        cout << "enter 1 - 4 only";
        break;
    }
}

/* for a range
switch (age)
{
    case >= 18 and <= 30:
        Console.WriteLine("18–30");
        break;

    case >= 31 and <= 50:
        Console.WriteLine("31–50");
        break;

    default:
        Console.WriteLine("Other");
        break;
}
*/