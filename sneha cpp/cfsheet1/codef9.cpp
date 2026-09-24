#include <iostream>
using namespace std;

int main()
{

    std::string firstname1;
    std::string secondname1;
    std::string firstname2;
    std::string secondname2;

    cin >> firstname1 >> secondname1;
    cin >> firstname2 >> secondname2;

    if (secondname1 == secondname2)
    {
        cout << "ARE Brothers";
    }
    else
        cout << "NOT";

    return 0;
}