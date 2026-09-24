// Write a function to convert Celsius temperature into Fahrenheit.

#include <stdio.h>
float farenhite(int);

float farenhite(int celcius)
{
    return ((9.0 / 5.0) * celcius) + 32;
}
int main()
{

    // scanf("%f",&celcius);//doesnt work cause celsius is not defined under main function
    int temp;
    scanf("%d", &temp);

    printf("%f", farenhite(temp));
    return 0;
}