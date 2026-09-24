#include <stdio.h>
int main()
{

    int age = 121;

    if (age > 68)
    {
        printf("eligible and very young\n"); // executed if true
    }
    if (age > 40)
    {
        printf("eligible and young\n"); // also executed if true
    }
    if (age > 20)
    {
        printf("eligible yo uncle\n"); // also executed if true
    }
    else
        printf("not eligible\n"); // also executed if true

    int a = 72; // aaise hi hehe. kinda seperation between two if else to show. 

    if (age > 60)
    {
        printf("yo twin"); // executed if true then terminated
    }
    else if (age > 40)
    {
        printf("hey cutie"); // executed if true then terminated
    }
    else if (age > 20)
    {
        printf("yo unc"); // executed if true then terminated
    }
    else
        printf("son?");

    return 0;
}