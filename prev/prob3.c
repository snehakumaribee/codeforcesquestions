//to convert celsius t farenhiet

#include <stdio.h>

int main()
{
    int c;
    //int f;
    //f = c*9.0/5 + 32;

    printf("enter temp in celsius ");
    scanf("%d",&c);

    //printf("temp in farenhiet = %f", c*9/5 + 32);  9/5 is integer div and equals 1, 9.0/5 is float div and equal 1.8
    printf("temp in celsius = %f", c*9.0/5 + 32);

    return 0;
}