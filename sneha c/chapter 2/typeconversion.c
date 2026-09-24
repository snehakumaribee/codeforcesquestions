#include <stdio.h>
int main()
{

    float a = 9; // or float a = 9.0000000
    int f = 4.5;  //(answer = 4.00000)
    int b = 2;
    float e = 9 / 2;   //(answer = 4.0000000)
    float c = a / b;   //(answer = 4.5000000)
    float d = 9.0 / b; //(answer = 4.50000)

    printf("the value of c is %f\n", c);
    printf("the value of d is %f\n", d);
    printf("the value of e is %f\n", e);
    printf("the value of f is %f\n", f);  

    return 0;
}