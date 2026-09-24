#include <stdio.h>
int main(){

    int i= 56;
    int n;

    printf("guess the number\n");
    scanf("%d",&n);

    do
    {
        if(n<i){
            printf("greater");
            scanf("%d",&n);
        }

        else if(n>i){
            printf("smaller");
            scanf("%d",&n);
        }

    } while (n!=i);

    printf("you guessed it %d",n);

    return 0;
    
}

//after 3 mistakes. i got the basic idea tho but today is 19feb2026 and this was my first project.
// i am glad. i hope ill make a great programmer.
//didnot use random number chooser from different library