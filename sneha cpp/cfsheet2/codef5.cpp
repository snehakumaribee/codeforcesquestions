#include <iostream>
using namespace std;

int main()
{
    int n;
    long nums;
    cin >> n;
    long max = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> nums;
        if (nums > max)
        {
            max = nums;
        }
    }

    cout << max;

    return 0;
}