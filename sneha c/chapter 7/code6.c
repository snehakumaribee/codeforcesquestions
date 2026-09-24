// Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7
// and 9 respectively.

#include <stdio.h>
int main(){

    int arr[3][10];

    for(int i=0; i<3; i++){

        for(int j= 1; j<11; j++){
            printf("%d\n", 2*j);
        }
    }

    return 0;
}