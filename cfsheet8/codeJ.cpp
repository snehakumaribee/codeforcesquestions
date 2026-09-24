#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int lucky[] = {4, 7, 44, 77, 47, 74, 444, 447, 477, 777, 774, 744, 474,747};
    int yes = 0;

    for (int i = 0; i < 14; i++)
    {
        if (n % lucky[i] == 0)
        {
            yes = 1;
            break;
        }
    }

    if (yes)
    {
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}