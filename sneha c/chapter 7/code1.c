// Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
// to the third element where ptr is a pointer pointing to the first element of the
// array.

#include <stdio.h>

int main()
{

    int arr[10] = {2, 4, 7, 8, 0, 19};
    int *ptr = arr; // or int *ptr = &arr[0];

    printf("the first element is %d", *ptr);
    // ptr + 2;  doesnt work
    printf("the third element is %d", *(ptr + 2));

    return 0;
}