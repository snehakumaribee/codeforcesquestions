#include <bits/stdc++.h>
using namespace std;
long long recursion(int a)
{
    if (a == 1)
    {
        return 1;
    }
    return a * recursion(a - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << recursion(n);

    return 0;
}