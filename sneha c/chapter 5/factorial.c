// function for factorial of a number

#include <stdio.h>

int factorial(int);

int factorial(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
        return factorial(a - 1) * a;
        //factorial(n)= 1*2*3*4*.....(n-1)*n
        //factorial(n)=factoial(n-1)*n
}
int main()
{

    int a;
    scanf("%d", &a);

    printf("%d", factorial(a));

    return 0;
}