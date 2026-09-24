#include <iostream>
using namespace std;

int main()
{

    int a;
    int b;
    char c;

    cin >> a >> c >> b;

    if ((c == '>' && a > b) || (c == '<' && a < b) || (c == '=' && a == b))
    {
        cout << "Right";
    }
    else
        cout << "Wrong";

    return 0;
}