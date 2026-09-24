#include <stdio.h>
int main()
{

    int n;
    int i = 2;
    int prime = 0;
    scanf("%d", &n);

    if (n==0 || n==1)
    {
        prime = 1;
    }
    else
    {

        while (i < n)
        {
            if (n % i == 0 && n != 2)
            {
                prime = 1;
                break;
            }
            i++;
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