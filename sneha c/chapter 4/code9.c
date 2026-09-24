// Write a program to check whether a given number is prime or not using loops.

#include <stdio.h>
int main()
{

    int n;
    int prime = 0;
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        prime = 1;
    }
    else
    {

        for (int i = 2; i < n; i++)
        {

            if (n % i == 0 && n != 2)
            {
                prime = 1;
                break;
            }
        }
    }

    if (prime)
    {
        printf("not prime");
    }
    else
        printf("prime");

    return 0;
}