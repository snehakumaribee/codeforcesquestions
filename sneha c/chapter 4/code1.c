//  Write a program to print multiplication table of a given number n

#include <stdio.h>
int main()
{

    int n;
    int i = 1;
    scanf("%d", &n);

    do
    {
        printf("%d\n", i * n);
        i++;
    } while (i <= 10);
    return 0;
}