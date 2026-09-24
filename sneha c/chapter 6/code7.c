// Try problem 3 using call by value and verify that it does not change the value of
// the said variable.

// Write a program to change the value of a variable to ten times of its current
// value.

#include <stdio.h>

int tentimes(int);
int tentimes(int a)
{
    return a * 10;
}

int main()
{

    int i = 60;
    printf("after call by value id %d\n", tentimes(i));
    printf("actual value %d\n", i);

    return 0;
}
