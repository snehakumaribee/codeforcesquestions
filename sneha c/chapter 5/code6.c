// Write a recursive function to calculate the sum of first ‘n’ natural numbers.

#include <stdio.h>

int sum(int);

int sum(int n)
{
    if (n == 1)//base case stops recursion
    {
        return 1;
    }
    else
        return sum(n - 1) + n;
    // sum n= 1+2+3+4+.....(n-1)+n
    // sum n = sum(n-1) + n
}

int main()
{

    int n;
    scanf("%d", &n);

    printf("%d", sum(n));

    return 0;
}