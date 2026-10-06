#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int nnum, mnum;
    while (t--)
    {
        cin >> nnum >> mnum;
        string m, target;
        cin >> m;
        cin >> target;

        int num = 0;

        while (m.find(target) == string::npos && num<6) // why 6? suppose string length = 1; 1 2 4 8 16 32 64 (7 iterations) 
        {                                                // 6 iterations widely used
            num++;
            m = m + m;
        }
        if (m.find(target) != string::npos)
        {
            cout << num << '\n';
        }
        else
            cout << "-1\n";
    }

    return 0;
}