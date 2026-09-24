#include <stdio.h>
int main()
{

    int n;
    int prime = 0;
    int i = 2;

    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        prime = 1;
    }
    else
    {

        do
        {

            if (n % i == 0 & n != 2)
            {
                prime = 1;
                break;
            }
            i++;

        } while (i < n);
    }

    if (prime)
    {
        printf("not prime");
    }
    else
        printf("prime");

    return 0;
}