#include <iostream>
// using namespace std;

int main()
{
    std::string s;
    std::cout << "enter your name : ";
    std::getline(std::cin, s);

    std::cout << s.length() << '\n'; // length of string
    if (s.empty())
    {
        std::cout << "u didnt enter your name\n"; // checks if string is empty
    }
    s.append("@gmail.com");
    std::cout << "your gmail is " << s << '\n'; // add strings s+(...)

    std::cout << s.at(1) << '\n'; // returns character at position/index

    s.insert(0, "@"); // inserts a char at index
    std::cout << s << '\n';

    std::cout << s.find('h') << '\n'; // find the character in string and returns its index

    s.erase(0, 5); // deletes a portion of a string; (beginning index, ending index)
    std::cout << s << '\n';

    s.clear(); // deletes the string
    std::cout << s;

    return 0;
}