#include <bits/stdc++.h>
using namespace std;
void recursion(int a)
{
    cin >> a;
    cout << a / 10 << " ";
    recursion(a / 10);
}

int main()
{
    int t;
    cin >> t;
    long long n;

    while (t--)
    {
        cin >> n;
    }

    return 0;
}