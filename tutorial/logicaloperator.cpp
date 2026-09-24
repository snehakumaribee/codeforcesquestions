#include <iostream>
using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 1;

    if (num1 && num2) //runs if both condition is true
    {
        cout << "&& both conditions are true\n";
    }
    else if (num1 || num2)//runs if atleast one condition is true
    {
        cout << "|| atleast one condition is true\n";
    }
    else if (num1 != num2)//runs if condition 1 is not equal to condition 2
    {
        cout << "!= not equal to\n"; // did not run cause upar wala run hogya already
    }

    if (num1 != num2)//runs if condition 1 is not equal to condition 2
    {
        cout << "!= not equal to\n"; // did not run cause upar wala run hogya already
    }

    return 0;
}