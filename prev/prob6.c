#include <stdio.h>
int main()
{
    int sub1;
    int sub2;
    int sub3;

    printf("enter sub1 marks: \n");
    scanf("%d", &sub1);

    printf("enter sub2 marks: \n");
    scanf("%d", &sub2);

    printf("enter sub3 marks: \n");
    scanf("%d", &sub3);

    if (sub1, sub2, sub3 >= 33 && sub1 + sub2 + sub3 >= 120)
        printf("you have passed in exam");

    else
        printf("you have failed in exam");
}