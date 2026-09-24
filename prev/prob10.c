#include <stdio.h>
int main()
{
    int a,b,c,d;

    printf("enter the numbers \n");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a>b && a>c && a>d)
    {
        printf("%d is the greatest",a);
    }

    else if(b>c && b>a && b>d)
        printf("%d is the greatest",b);

    else if(c>d && c>a && c>d)
        printf("%d is greatest",c);

    else 
        printf("%d is greatest",d);
}