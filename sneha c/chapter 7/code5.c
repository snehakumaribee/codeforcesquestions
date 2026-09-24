// Write a program containing functions which counts the number of positive
// integers in an array.

#include <stdio.h>

void func(int *, int);
void func(int arr[], int n)
{
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        x++;
    }

    printf("%d", x);
}

int main()
{

    int arr[] = {1, 4, -7, -39, 28, -3, 7};
    func(arr, 7);
    return 0;
}