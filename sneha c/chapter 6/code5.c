// Write a program using a function which calculates the sum and average of two
// numbers. Use pointers and print the values of sum and average in main().

#include <stdio.h>

int sum(int *, int *);
int sum(int *a, int *b)
{
    return *a + *b;
}

float avg(int *, int *);
float avg(int *a, int *b)
{
    return (*a + *b) / 2.0;
}

int main()
{

    int i = 56;
    int j = 90;
    int *a = &i;
    int *b = &j;
    printf("%d\n", sum(a, b));
    printf("%f\n", avg(&i, &j));

    return 0;
}