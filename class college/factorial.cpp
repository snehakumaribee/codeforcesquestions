#include <iostream>
using namespace std;

class A
{
private:
    int a;
    int factorial = 1;

public:
    void getdata()
    {
        cout << "enter the number";
        cin >> a;
    }
    void putdata()
    {
        for (int i = 1; i <= a; i++)
        {
            factorial = factorial * i;
        }
        cout << factorial;
    }
};

int main()
{
    A a;
    a.getdata();
    a.putdata();
    return 0;
}