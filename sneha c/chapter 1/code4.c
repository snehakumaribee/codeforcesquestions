#include <stdio.h>
int main(){

    int radius = 5;

    /*int radius;
    printf("enter radius = ");
    scanf("%d", &radius);*/

    //printf("area of circle = %d", 2*3.14*radius);  doesnt work cause 3.14 is float value. and this is perimeter formula lol

    printf("area of circle = %f", 3.14*radius*radius);

    int height = 5;

    printf("volume of cylinder = %f", 3.14*radius*radius*height);

    return 0;
}