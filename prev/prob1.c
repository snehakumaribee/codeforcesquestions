//area of rectangle using hard coded inputs

/*#include <stdio.h>
int main()
{
    int l= 5;
    int b= 6;
    printf("area of rectangle= %d", l*b);
}*/

// area of rectangle using values entered by the user

#include <stdio.h>
int main()
{
    int l;
    int b;

    printf("enter the length: ");
    scanf("%d",&l);

    printf("\nenter the breadth: ");
    scanf("%d",&b);

    printf("\narea of rectangle = %d",l*b);


}