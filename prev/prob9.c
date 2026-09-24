#include <stdio.h>
int main(){

    char ch;
    ch= 'a';

    printf("the value of character is = %c \n", ch);
    printf("the value of character is = %d\n",ch);

    if (97<ch<122)
    {
        printf("character is lowercase\n");
    }

    else
    printf("the character is not lowercase");
    
}

// with char we use 'a' and with string we use "hi"