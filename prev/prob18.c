#include <stdio.h>

int pattern(int n);

int pattern(int n){
    for (n = 0; n < 3; n++)
    {
        for (int i=0; i<=n; i++ ){
            printf("*");
        }
        printf("\n");
    }

}

int main(){
    pattern(3);
    return 0;
}
    

//practice girl this is so hard 