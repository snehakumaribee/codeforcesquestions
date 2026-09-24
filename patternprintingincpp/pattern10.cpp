#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < (n + 1) / 2; i++)
    {
        for (int j = 0; j < n / 2 - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < (n + 1) / 2; i++)
    {
        for (int j = 1; j < i + 2; j++)
        {
            cout << " ";
        }
        if (n % 2 == 0)
        {
            for (int k = 1; k < n - (2 * i); k++)
            {
                cout << "*";
            }
        }
        else
            for (int l = 1; l < n - (2 * i) - 1; l++)
            {
                cout << "*";
            }

        cout << endl;
    }

    return 0;
}