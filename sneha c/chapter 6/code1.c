// Write a program to print the address of a variable. Use this address to get the
// value of the variable.

#include <stdio.h>
int main()
{

    int a = 67;
    int *b = &a;

    printf("the address of variable is %p or %u\n", b, b);
    printf("the value of variable is %d\n", *b);

    return 0;
}