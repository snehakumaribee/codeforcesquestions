#include <stdio.h>

int sum(int a, int b);

int sum(int a, int b){
    printf("the sum is %d",a+b);
    return 0;
}

int main(){
    sum(2,3);

    return 0;
}