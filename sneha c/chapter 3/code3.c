// Calculate income tax paid by an employee to the government as per the slabs
//  mentioned below:

#include <stdio.h>
int main()
{

    int income;

    scanf("%d", &income);

    // if (250000 < income < 500000.0)     ALWAYS TRUE (250000<income) < 500000  = | true or false (0 or 1 ) < 500000 always | so true.
    if (income >= 250000.0 && income < 500000.0)
    {
        printf("income tax paid is %f rs", 0.05 * income);
    }

    else if (500000.0 <= income && income < 1000000.0)
    {
        printf("income tax paid is %f rs", 0.2 * income);
    }

    else if (income >= 1000000.0)
    {
        printf("income tax paid is %f rs", 0.3 * income);
    }

    else
        printf(" zero tax paid");

    return 0;
}