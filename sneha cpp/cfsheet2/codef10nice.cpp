#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int prime = 1;

    cout << 2 << " ";

    for (int i = 3; i <= n; i++)
    {
        prime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime)
        {
            cout << i << " ";
        }
    }

    return 0;
}