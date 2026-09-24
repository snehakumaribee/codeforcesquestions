/*Write a program to determine whether a character entered by the user is
lowercase or not.*/

#include <stdio.h>
int main()
{

    char c;
    scanf("%c", &c);

    if ((c >= 97) && c <= 122)
    {
        printf("character is lowercase\n");
    }

    else
        printf("character is not lowercase\n");

    printf("%d", c);

    return 0;
}