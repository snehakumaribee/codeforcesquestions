#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long even = 0, odd = 0, positive = 0, negative = 0;
    int num;

    for (int i = 1; i <= n; i++)
    {
        cin >> num;

        if (num < 0)
        {
            negative++;
        }
        if (num > 0)
        {
            positive++;
        }
        if (num % 2 == 1 || num % 2 == -1) //(n%2 !=0)
        {
            odd++;
        }
        if (num % 2 == 0)
        {
            even++;
        }
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;

    return 0;
}