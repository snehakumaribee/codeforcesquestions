#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;

    int num = (21 * 60) + k;

    int hrs = num / 60;
    int min = num % 60;

    // cout << num /60 << ':' << num % 60;
    if (hrs < 10)
    {
        cout << '0' << hrs << ':';
    }
    else
        cout << hrs << ':';

    if (min < 10)
    {
        cout << '0' << min;
    }
    else
        cout << min;

    return 0;
}