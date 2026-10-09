#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;

    while (t--)
    {
        cin >> n;
        string s;
        // int newarr[n];
        int position[n];
        int rear2 = -1;
        // int num = -1;
        cin >> s;

        for (int i = 0; i < n; i++)
        {
            /* code */

            if (s[i] == '1')
            {
                // rear2++;
                // newarr[rear] = arr[i];
                rear2++;
                position[rear2] = i + 1;
            }
            else if (s[i] == '2')
            {
                if (rear2 == -1)
                {
                    continue;
                }
                else
                {
                    // num--;
                    rear2--;
                }
            }
            else
                continue;
        }

        cout << rear2 + 1 << '\n';
        for (int i = 0; i <= rear2; i++)
        {
            cout << position[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}