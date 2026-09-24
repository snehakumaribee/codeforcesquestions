/*Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.*/

#include <stdio.h>
int main()
{

    int sub1, sub2, sub3;

    scanf("%d", &sub1);
    scanf("%d", &sub2);
    scanf("%d", &sub3);

    if (((sub1 + sub2 + sub3) / 300.0) >= 0.4 && sub1 > 33 && sub2 > 33 && sub3 > 33) // messy

    // or (sub1+sub2+sub3)/3 >= 40

    // sub1+sub2+sub3 / 300 returns int value 0 of 0.4, which is always false here as 0<0.4 so fail.

    {
        printf("pass");
    }
    else
        printf("fail");
}
