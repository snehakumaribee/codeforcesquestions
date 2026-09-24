// Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
// a function and print its address. Are these addresses same? Why?

#include <stdio.h>

int func(int *);

int func(int *a)
{
    printf("the address of i is %d\n", a);
    return 0;
    // return a didnt work... why?
}

int main()
{

    int i;
    int *j = &i;
    printf("the address of i is %u\n", &i);
    func(j);
    return 0;
}