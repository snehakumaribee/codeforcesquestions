#include <stdio.h>
int main()
{

    int a = 4; // doesnt depend here

    switch (1) // depend here whats inside ()
    {

    case 1:
        printf("1 \n"); // true to executes untill break

    case 2:
        printf("2 \n");

    case 3:
        printf("3 \n");
        break;

    case 4: 
        printf("4 \n");
    }
    return 0;
}