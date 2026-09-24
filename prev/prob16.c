//fucntion to find average of three numbers

#include <stdio.h>

float average(float a, float b, float c);

float average(float a, float b, float c){
    printf("%f",(a+b+c)/3);

    return (a+b+c)/3.0;
}

int main(){
    average(2,3,4);
    return 0;
}

