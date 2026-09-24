/*Write a program to find greatest of four numbers entered by the user.*/

#include <stdio.h>

int main()
{

    int a, b, c, d;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);

    if (a > b && a > c && a > d)   //45 34 23 67
    {
        printf("a is the greatest\n");
    }

    else if (b > c && b > d)
    {
        printf("b is greatest");
    }

    else if (c > d)
    {
        printf("c is greatest");
    }

    else
        printf("d is greatest");

    return 0;
}