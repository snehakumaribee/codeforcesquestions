#include <iostream>
using namespace std;

int main()
{
    int n, k, a;
    cin >> n >> k >> a;

    long double ans = (n * k) / (double)a;

    long long inte = (long long)(ans);
    double diff = ans - inte;

    if (diff != 0)
    {
        cout << "double";
    }
    else if (inte <= 2147483647 && inte >= -2147483647)
    {
        cout << "int";
    }
    else if (inte > 2147483647)
    {
        cout << "long long";
    }

    return 0;
}