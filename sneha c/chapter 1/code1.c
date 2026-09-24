#include <stdio.h>
int main(){

    int a;
    a = 1;
    int b = 2;

    float c;
    c = 6.7;
    float d = 6.9;

    char e;
    e = 'f';
    char f = 'a';
    //int f = a; wont work, same variable name inside {}
    int g = a;
    float h = a;

    printf("%d %f %c %d %f", a,c,f,g,h);

    return 0;
}