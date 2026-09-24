#include <stdio.h>
int main()
{

    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);//printf ke andar same variable to right to left evaluate hoga
    //6 6 4

    return 0;
}