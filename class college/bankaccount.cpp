#include <bits/stdc++.h>
using namespace std;

class bankaccount
{
private:
    int accountnumber;
    string accountholdername;
    double balance;
    int withdrawamount;

public:
    void getdata()
    {
        cout << "enter number and your name = ";
        cin >> accountnumber >> accountholdername;
    }
    void deposite()
    {
        cout << "enter money = ";
        cin >> balance;
    }
    void withdraw()
    {
        cout << "enter withdraw amount = ";
        cin >> withdrawamount;
    }
    void displaybalance()
    {
        cout << "your balance is = ";
        cout << balance - withdrawamount;
    }
};

int main()
{
    bankaccount a;
    a.getdata();
    a.deposite();
    a.withdraw();
    a.displaybalance();
    return 0;
}