#include <iostream>
#include <cmath>

//find more at  www.cplusplus.com/refernce/cmath

int main()
{

    int x = 3.14;
    int y = 4;
    int z;

    z = std::max(x, y); // chooses the max of two
    z = std::min(x, y); // chooses the min of two
    z = pow(2, 4);      // defined in <cmath> library   // equates to 2 to the power 4
    z = sqrt(9);        // defined in <cmath> library  // gives the square root
    z = abs(-3);        // <cmath> // gives absolte value as in negative to postivite
    z = round(x);       //<cmath> rounds the number //3
    z = ceil(x);        //<cmath> round to nearest big round number
    z = floor(x);       //<cmath> rounds to nearest small round number

    std::cout << z;

    return 0;
}