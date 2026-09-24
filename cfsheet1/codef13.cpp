#include <iostream>
using namespace std;

int main()
{

    long long a, b, k;

    cin >> a >> b >> k;

    if (a % k == 0 && b % k == 0)
    {
        cout << "Both";
    }
    else if (a % k == 0 && b % k != 0)
    {
        cout << "Memo";
    }
    else if (a % k != 0 && b % k == 0)
    {
        cout << "Momo";
    }
    else
        cout << "No One";

    return 0;
}

/*#include <iostream>
using namespace std;

int main() {
    long long a, b, k;
    cin >> a >> b >> k;

    bool aDiv = (a % k == 0);
    bool bDiv = (b % k == 0);

    if (aDiv && bDiv)
        cout << "Both";
    else if (aDiv)
        cout << "Memo";
    else if (bDiv)
        cout << "Momo";
    else
        cout << "No One";

    return 0;
}*/