#include <iostream>

int main()
{

    // parenthesis
    // multiplication or division
    // addition or substraction

    // addition operator
    int students = 20;
    students = students + 1;
    // students += 1;
    // students++;

    // substraction operator
    students = students - 2;
    // students -= 2;
    // students--;  == students-=1;

    // multiplication operator
    students = students * 2;
    // students*=2;

    // division operator
    students = students / 2;
    // students /=2;

    // modulo operator
    int remainder = students % 3;

    std::cout << remainder << std::endl;

    return 0;
}