#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= (4 * n); i++)
    {
        if (i % 4 != 0)
        {
            cout << i << " ";
        }
        else
            cout << "PUM" << '\n';

        // for (int j = 1; j <= (4 * i); j++)
        // {
        //     if (j % 4 == 0)
        //     {
        //         cout << "PMS" << '\n';
        //         continue;
        //     }
        //     else
        //         cout << j << " ";
        // }
    }

    return 0;
}