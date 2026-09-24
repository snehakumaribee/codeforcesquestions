#include<iostream>
int main(){

    //type conversion = convert a value of one data type to another 
    //    implicit = automatics
    //    explicit = precede value with new data type

    int num = 3.14; //prints 3   implicit conversion
    double i = (int)3.14;   //explicit
    char hi = 100; //returns d   //implicit
    int ij = (char)100; //doesnt print d tho, because its getting stored in int 

    std::cout << (char)100 << '\n';// this works

    int marks =  90;
    int total = 100;
    int percentage = marks/total *100;  //90/100 = 0.9 returns int so 0 only
    int percentage = marks/(double)total *100;  //90/100.0 = 0.9 return double value
    std::cout << percentage;



    return 0;
}