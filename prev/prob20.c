// call by value

#include <stdio.h>

int value(int x, int y);

int value(int x, int y)
{
    x = 7; // does not work
    return x + y;
}

int main()
{
    int x = 5;
    int y = 6;

    printf("sum of 5 and 6 is : %d\n", value(5, 6));
    printf("the value of x is: %d\n", x);
    return 0;
}