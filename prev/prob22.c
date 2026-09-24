//to swap values using pointers

#include <stdio.h>

int swap(int*a, int*b);

int swap(int*a, int*b){
    int temp= *a;
    *a=*b;
    *b=temp;
}

int main(){
    int a= 5;
    int b=6;
    swap(&a,&b);
    printf("swap values : %d %d", a,b);
}