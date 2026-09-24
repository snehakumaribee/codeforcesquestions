#include <iostream>
using namespace std;

int main()
{
    char op;
    double num1, num2;
    double result = 0;

    cout << "********CALCULATOR**********\n";
    cout << "enter 1st number\n";
    cin >> num1;
    cout << "enter 2nd number\n";
    cin >> num2;
    cout << "enter operator\n";
    cin >> op;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        cout << result;
        break;
    case '-':
        result = num1 - num2;
        cout << result;
        break;
    case '*':
        result = num1 * num2;
        cout << result;
        break;
    case '/':
        result = num1 / num2;
        cout << result;
        break;
    default:
        cout << "please enter a valid operator";
        break;
    }
    cout << "\n********CALCULATOR**********";

    return 0;
}