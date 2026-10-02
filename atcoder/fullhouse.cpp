#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5];
    int num[14] = {};
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        num[arr[i]]++;
    }

    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < 14; i++)
    {
        if (num[i] == 3)
        {
            count1++;
        }
        if (num[i] == 2)
        {
            count2++;
        }
    }

    if (count1 && count2)
    {
        cout << "Yes\n";
    }
    else
        cout << "No\n";

    return 0;
}