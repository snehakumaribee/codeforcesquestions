#include <iostream>
using namespace std;

int main()
{
    long long a, b, c, d;

    cin >> a >> b >> c >> d;

    long long ans = 1;

    ans = ((ans % 100) * (a % 100)) % 100; // lets say 1* 456 => 1*(456%100)= 1*56= 56    // we can total ignore (ans%100)
    ans = ((ans % 100) * (b % 100)) % 100; // 56%100 (modulo we can ignore here) * 6578%100 = 56*78 = (4368)%100 = last 2 = ans;
    ans = ((ans % 100) * (c % 100)) % 100; // 68*idk = (4digitnumber)%100 = 2 digit number;
    ans = ((ans % 100) * (d % 100)) % 100; // we need (4digitnumber)%100 even if we do (ans % 100) cause in the last iteration 
    // it couldve been a 4 digit or 3 digit number;

    if (ans < 10)
    {
        cout << "0" << ans; // if the answer was 9 itd have printed 9 only but we want last last two digit 09, hence this;
    }
    else

        cout << ans;

    return 0;
}