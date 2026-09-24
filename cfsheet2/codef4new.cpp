#include <iostream>
using namespace std;

int main()
{
    int password;

    while (cin >> password)
    {
        if (password == 1999)
        {
            cout << "Correct";
            return 0;
        }
        else
            cout << "Wrong" << endl;
    }

    return 0;
}