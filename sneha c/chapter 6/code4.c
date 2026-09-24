#include <stdio.h>

int tentimes(int *);
int tentimes(int *a)
{

    //*a = *a * 10;  works
    return *a*10;
}

int main()
{

    int i = 3;
    int *j = &i;
    printf("%d", tentimes(j));
    return 0;
}