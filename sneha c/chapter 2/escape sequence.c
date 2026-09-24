#include<stdio.h>

int main(){

    printf("hello! \n Hi!");
    printf("hello \t hi");
    printf("hello this is escape sign \\");
    printf(" & ^ %$#@!* ; \\ \" \\n \\t ");

    return 0;
}

//  \; doesnt work every special case doesnt work. because we can write that normally already.

//gcc "xyz ufgf.c"
//gcc xyz ufgf.c wont work
//gcc xyz_ufgf.c also wont work