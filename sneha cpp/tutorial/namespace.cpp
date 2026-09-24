#include <iostream>
using namespace std; // to avoid writing std:: but not always

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main()
{

    /* Namespace provides a solution for preventing name conflicts.
    It allows same/identically named variables/entities as long as they are in different namespaces.
    */


    // all 3 doesnt work at onces. the variable which is inside works. 

    int x = 3;

    cout << x; // prints 3

    //using namespace first;

    //cout << x;

    // using namespace second;

    // cout << x;

    return 0;
}