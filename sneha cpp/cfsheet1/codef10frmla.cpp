// summation of n numbers.
// sum n = sum(n-1) + n.

#include <iostream>
using namespace std;

int main()
{

    long long n;

    cin >> n;

    long long sum = n * (n + 1) / 2;

    cout << sum;

    return 0;
}