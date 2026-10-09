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
        long long arr[n];
        int rear = -1;
        vector<int> newarray;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[];
        }
        newarray[0] == arr[0];
        rear++;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] >= arr[i - 1])
            {
                rear++;
                newarray[rear] = arr[i];
            }
            else
            {
                rear++;
                newarray[rear] = arr[i] - 1; //not 0
                rear++;
                newarray[rear] = arr[i];
            }
        }

        cout << rear + 1 << '\n';
        for (int i = 0; i < rear; i++)
        {
            cout << newarray[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}