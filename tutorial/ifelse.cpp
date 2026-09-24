#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "enter age: ";
    cin >> age;

    if (age >= 100)
    {
        cout << "you r too old for us";
    }
    else if (age >= 18)
    {
        cout << "welcome!";
    }
    else
        cout << "go to school kid";
    return 0;
}