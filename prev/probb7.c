#include <stdio.h>
int main(){

    int salary;
    int tax;

    printf("enter the salary");
    scanf("%f",&salary);

    switch(salary){
        case 1: (250000<salary<500000);
        printf("tax paid = %f", 0.05*salary);
        break;

        case 2: (salary>500000);
        printf("tax paid = %f", 0.3*salary);
        break;
    }

    return 0;

}

//this doesnt work