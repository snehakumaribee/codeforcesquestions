// to find average of 3 numbers

#include <stdio.h>
float avg(int, int, int);
float avg(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}
int main()
{

    int mango;
    int lichi;
    int kharbuj;

    scanf("%d", &mango);
    scanf("%d", &lichi);
    scanf("%d", &kharbuj);

    printf("%f", avg(mango, lichi, kharbuj));
    return 0;
}