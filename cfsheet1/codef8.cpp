// Given two numbers N and M. Print the summation of their last digits.

#include <iostream>
using namespace std;

int main()
{

    long long a, b;

    cin >> a >> b;

    int summation = (a % 10) + (b % 10);

    cout << summation;

    return 0;
}