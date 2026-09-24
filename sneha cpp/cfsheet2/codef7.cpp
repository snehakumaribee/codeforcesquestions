#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int testc;
    long long fact = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> testc;
        for (int i = 1; i <= testc; i++)
        {
            fact = fact * i;
        }
        cout << fact << endl;
        fact = 1;
    }

    return 0;
}