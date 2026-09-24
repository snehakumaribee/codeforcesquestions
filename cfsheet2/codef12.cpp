#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int response;

    for (int i = 1; i <= n; i++)
    {
        cin >> response;

        if (response == 1)
        {
            cout << "HARD";
            return 0;
        }
    }
    cout << "EASY";

    return 0;
}