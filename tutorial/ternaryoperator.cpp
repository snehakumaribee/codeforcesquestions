//this is a replacement to if else statement
#include <iostream>
using namespace std;

int main(){
    int age = 16;
    // condition? expression1 : expression2   //expression 1 if true, expression2 if false
    age >= 18 ? cout << "u r an adult" : cout << "u r a minor";
    // cout << (age >=18 ? "u r an adult" : "u r a minor"); // also works



    return 0;
}