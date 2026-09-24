// random number generator code taken from chatgpt

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); // Seed the random number generator

    int num = rand() % 100 + 1; // Random number from 1 to 100

    // printf("Random number: %d\n", num);

    int input;

    int numofguess = 0;

    do
    {
        printf("\n");
        scanf("%d", &input);
        if (input < num)
        {
            printf("higher number please\n");
        }
        else if (input > num)
        {
            printf("lower number please\n");
        }
        else
            printf("yayyyyy");
        numofguess++;
    } while (input != num);

    printf("you guessed it in %d guesses\n", numofguess);

    return 0;
}