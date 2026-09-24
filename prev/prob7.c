#include <stdio.h>
int main(){
    
    int salary;
    int tax;

    printf("enter the salary \n");
    scanf("%f",&salary);

    if(250000<salary<500000){
        printf("tax paid = %f", 0.05*salary);
    }

    else if(500000<salary<1000000){
        printf("tax paid = %f ", 0.2*salary);
    }\

    else if(salary>1000000){
        printf("tax paid = %f", 0.3*salary);
    }

    else{
        printf("no tax is paid");
    }
}

//also wrong cause idk tax system