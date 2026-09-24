#include <iostream>
using namespace std;

int main()
{
    std::string name;
    int age;

    cout << "what's your name? ";
    // cin >> name; // works for a single word string tho.
    // getline(cin,name); //multiple words accepted.
    getline(cin >> ws, name); // if there was an input before. use this.

    cout << "what's you age ? " << name;
    cin >> age;

    cout << "Hello " << name << " you are " << age << " years old.";

    return 0;
} 