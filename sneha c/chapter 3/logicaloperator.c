#include <stdio.h>
int main()
{
    int a = 1;
    int b = 1;
    int c = 0;

    printf(" the value of a and b is %d\n", a && b);
    printf(" the value of a or b is %d\n", a || b);
    printf(" the value of not a is %d\n", !a);
    printf(" the value of a and c is %d\n", a && c);
    printf(" the value of a or c is %d\n", a || c);
    printf(" the value of not c is %d\n", !c);

    if (a)
    {
        if (b)
        {
            printf("yes!\n");
        }
    }

    // above nested if is same as below

    if (a && b)
    {
        printf("yes!\n");
    }
    return 0;
}