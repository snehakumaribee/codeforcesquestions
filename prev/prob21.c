//call by reference

#include <stdio.h>

int ref(int* a, int* b);

int ref(int*a, int*b){
    *a=6;
    return *a+*b;
}

int main(){
    int a= 3;
    int b=7;
    printf("the value of a is %d\n",a);
    printf("sum of a and b is:%d\n", ref(&a,&b));
    printf("the value of a is %d\n",a);
}