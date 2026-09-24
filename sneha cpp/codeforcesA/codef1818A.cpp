#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k, p;
    std::string s;
    std::string me;
    
    for (int i = 0; i < n; i++)
    {
        int mem = 1;
        cin >> k >> p;
        cin >> s;
        me = s;
        for (int j = 1; j < k; j++)
        {
            cin >> s;
            if (s == me)
            {
                mem++;
            }
        }
        cout << mem <<endl;
    }

    return 0;
}