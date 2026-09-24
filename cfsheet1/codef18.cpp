#include <iostream>
using namespace std;
int main()
{
    char x;

    cin >> x;

    if (48 <= x && x <= 57)// this is so wrong...
    {
        cout << "IS DIGIT";
    }
    else if (x >= 65 && x <= 91)
    {
        cout << "ALPHA" << "\n"
             << "IS CAPITAL";
    }
    else if (x >= 97 && x <= 123)
    {
        cout << "ALPHA" << "\n"
             << "IS SMALL";
    }

    return 0;
}