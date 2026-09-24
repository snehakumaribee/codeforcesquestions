#include <stdio.h>
int main(){

    float principle;
    float rate_of_interest;
    float years;

    printf("enter principle amount = ");
    scanf("%f", &principle);

    printf("enter rate of interest = ");
    scanf("%f", &rate_of_interest);

    printf("enter duration = ");
    scanf("%f", &years);

    printf("simple interest = %f", (principle*rate_of_interest*years)/100.0);

    return 0;
}