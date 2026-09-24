// recursion

#include <stdio.h>

int recursion(int n);

int recursion(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    // int result = n*recursion(n-1);doesn't work!
    // printf("%d",result);doesn't work!
    return n * recursion(n - 1);
}

int main()
{
    // recursion(5);doesn't work!
    printf("%d", recursion(6));
    return 0;
}

// bhai bhai kitna time