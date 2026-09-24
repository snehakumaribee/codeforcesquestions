#include <stdio.h>
int main()
{

    int a;
    scanf("%d", &a);
    if (a % 97 == 0)
    {
        printf("number is divisible by 97");
    }
    else
        printf("number is not divisible by 97");

    return 0;
}