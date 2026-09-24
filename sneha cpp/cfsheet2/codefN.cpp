#include <iostream>
using namespace std;

int main()
{
    char s;
    int n;
    cin >> s;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        for (int j = 0; j < num; j++)
        {
            cout << s;
        }
        cout << endl;
    }

    return 0;
}