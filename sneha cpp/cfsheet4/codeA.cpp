#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; 
    string t;

    cin >> s;
    cin >> t;

    cout << s.length() << " " << t.length() << '\n';

    string n = s + " " + t ;
    cout << n;

    return 0;
}