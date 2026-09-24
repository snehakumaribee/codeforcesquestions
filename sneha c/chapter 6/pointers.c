#include <stdio.h>
int main()
{

    int i=67;
    int *j = &i;

    printf("the address of integer i is %p\n", &i);
    printf("the address of integer i is %u\n", &i);
    printf("the address of integer i is %d\n", j);

    printf("the value at address is %d\n", *j);
    printf("the value at address is %d\n", *(&i));  // j== &i literally
    printf("the value at address is %d\n", i);  

    printf("the address of pointer j is %u\n", &j);
    printf("value at adress j is %d\n", j);
    printf("value at adress j is %d\n", *(&j));

    return 0;
}