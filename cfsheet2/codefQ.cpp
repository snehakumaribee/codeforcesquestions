#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long num;

    for (int i = 0; i < t; i++)
    {
        cin >> num;

        if (num == 0)
        {
            cout << "0";
        }
        while (num)
        {
            cout << num % 10 << " ";
            num = num / 10;
        }

        cout << '\n';
    }

    return 0;
}