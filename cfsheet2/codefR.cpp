#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, m;

    while (1)
    {
        cin >> n >> m;
        int mini = min(n, m);
        int maxi = max(n, m);
        int sum = 0;

        for (int i = mini; i <= maxi; i++)
        {
            if (mini <= 0 || maxi <= 0)
            {
                return 0;
            }

            sum = sum + i;

            cout << i << " ";
        }
        cout << "sum =" << sum;

        cout << '\n';
    }

    return 0;
}