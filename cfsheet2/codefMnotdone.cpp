#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;
    int mini = min(a, b);
    int maxi = max(a, b);

    for (int i = mini; i <= maxi; i++)
    {
        while (i / 10 == 0)
        {
            if (i % 10 == 4 || i % 10 == 7)
            {
                bool luck = true;
                i = i / 10;
            }
            else
                continue;
        }

        cout << i << '\n';
    }

    return 0;
}