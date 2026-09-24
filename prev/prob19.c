// pointers

#include <stdio.h>
int main(){

    int i= 72;
    int*j= &i;
    int**k=&j; //stores address of j   (double pointer variable)

    printf("the address of i is : %p\n", j);

    printf("the address of i is : %p\n", &i);

    printf("the address of j is : %p\n", &j);

    printf("the value of i is : %d\n", i);
    
    printf("the value of i is : %d\n", *j);

    printf("the value of i is : %d\n", *(&i));

    printf("the value of j is : %d", j);

    printf("the value of j is : %d", *(&j));

}

/* similarly we have
char i= 'A';
char* j= &i;

and similarly float double etc.
*/