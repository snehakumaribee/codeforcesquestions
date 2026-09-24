//to make three functions and call them one by one

#include <stdio.h>

void goodmorning();
void goodafternoon();
void goodevening();

void goodmorning(){
    printf("goodmorning\n");
}

void goodafternoon(){
    printf("goodafternoon\n");
}

void goodevening(){
    printf("goodevening\n");
}

int main(){
    goodmorning();
    goodafternoon();
    goodevening();

    return 0;
}