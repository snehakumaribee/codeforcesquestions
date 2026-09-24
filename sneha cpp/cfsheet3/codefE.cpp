#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int lowest = INT_MAX;
    int position;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        lowest = min(a[i], lowest); // doesnot help with the position thing
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == lowest)
        {
            position = i+1;
            break;
        }
    }

    cout << lowest << " " << position;

    return 0;
}