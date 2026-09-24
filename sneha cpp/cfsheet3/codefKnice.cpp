#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // long long a;
    // cin >> a; wont work learn string. wont work for large digit example 1000000 digits out of range of long long as well;
    // number != 10^6 thats 7 digits, number = 10^6 digits, that is 9 10^6 times written
    string s;
    cin >> s;

    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        // sum = sum + (a % 10);
        // a = a / 10;
        sum += s[i] - '0';
    }

    cout << sum;

    return 0;
}