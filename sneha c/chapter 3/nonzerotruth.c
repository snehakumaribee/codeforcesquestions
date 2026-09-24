// In C a non-zero value is considered to be true.

#include <stdio.h>
int main()
{

    if (1)
    { //  {}after if is a necesity
        printf("int executed\n");
    }

    if (47.346345)
    {
        printf("float executed\n");
    }
    if ('s')
    {
        printf("character executed\n");
    }
    int a;
    if (a=0)
    {
        printf("character executed\n");
    }

    if (0)
    {
        printf("not executed\n");
    }

    printf("any non zero value/ expression is true\n");
    return 0;
}