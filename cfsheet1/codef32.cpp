#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float discount;
    long price;
    cin >> discount >> price;

    double actprice = (double)price / (1 - (discount / 100));

    cout << fixed << setprecision(2) << actprice;

    return 0;
}