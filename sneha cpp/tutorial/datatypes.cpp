#include <iostream>
using namespace std;

int main(){

    //interger data type

    int age = 21;
    int roll_no = 53;

    //float data type for decimal numbers; double for bigger decimal numbers

    float temp = 26.7;
    double gpa = 9.36;
    double pi = 3.1419546;

    //char data type for single characters

    char grade = 'A';
    char position = '3';

    //boolean data type for true or false

    bool pass = true;
    bool fail = false;

    //string data type for words or sentences

    std::string hello = "hello"; // we need to use std:: here
    std::string iloveyou = "i love you";

    //we can further add short or long or long long to them.

    cout << hello << " my name is Sneha" << '\n' << "i am " << age << " years old " << '\n' << "my gpa is " << gpa <<'\n';
    cout << "i passed my exam with an " << grade << " " << iloveyou << endl;



}