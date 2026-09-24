//function to convert celsius to farenhite

#include <stdio.h>

float temp(float c);

float temp(float c){

    printf("%f", (c*9/5)+32);
    return (c*9/5+32);
}

int main(){
    temp(30);
    return 0;
}

// 9/5 is integer value even with float so it return 1 and not 1.8   so write 9.0/5 or 9/5.0