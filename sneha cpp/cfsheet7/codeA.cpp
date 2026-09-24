#include <bits/stdc++.h>
using namespace std;
void iloverecursion(int a)
{
    if (a == 0)
    {
        return;
    }
    cout << "I love Recursion\n";
    iloverecursion(a - 1);
}

int main()
{
    int n;
    cin >> n;
    iloverecursion(n);

    return 0;
}