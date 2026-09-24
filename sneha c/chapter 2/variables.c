#include <stdio.h>
int main()
{

    int a=5;
    int b=3;
    //a = b = 15;
    int h, j;
    int s = 31, t = 78;
    int l = a + b;
    // int a+b=l;  INVALID

    float c;
    float d;
    c = d = 6.7;
    //float c=d=6.7; invalid
    float x, z;  
    
    char r = 'f';
    // char a='s';
    char w = 'a';

    //int 8s=67; cannot start with a number

    float q= (float)a/b;  //ong works

    printf("value is char is %c\n", a); // error same variable name in int and char is invalid
    printf("value is char is %c\n", w); // valid
    printf("value is q  is %f\n", q); 

    printf("");
}