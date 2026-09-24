#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int fib = 0;
    int prev1, prev2;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            fib = 0;
            prev2 = 0;
        }
        else if (i == 2)
        {
            fib = 1;
            prev1 = 1;
        }else

        fib = prev1 + prev2;
        cout << fib << " ";
        prev2 = prev1;
        prev1 = fib;
    }

    return 0;
}