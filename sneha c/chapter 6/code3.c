// Write a program to change the value of a variable to ten times of its current
// value.

#include <stdio.h>

void tentimes(int *);
void tentimes(int *a)
{

    *a = *a * 10;
}

int main()
{

    int i = 3;
    int *j = &i;
    tentimes(j);
    printf("%d", i);
    //printf("%d", teneimes(j)); doesnt work why? cause void returns nothing. 
    // if we wouldve taken int in funct, we would have to return 0    wait wait or code4.c
    return 0;
}