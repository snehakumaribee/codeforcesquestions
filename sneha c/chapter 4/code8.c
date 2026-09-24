// Repeat 8 using while loop

#include <stdio.h>
int main()
{

    int i = 1, n;
    int fact = 1;

    scanf("%d", &n);

    while (i <= n)
    {
        fact = fact * i;
        i++;
    }

    printf("%d", fact);
    return 0;
}