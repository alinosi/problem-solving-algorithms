#include <bits/stdc++.h>

using namespace std;

string sayHello(string s) {
    string result = "";
    string hello = "hello";
    int idx = 0;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == hello[idx]) {
            result += hello[idx];
            idx++;
        }
    }

    string istrue = (result == hello) ?  "YES" : "NO";

    return istrue;
}

int main () {
    string s; 

    cin >> s;
    
    cout << sayHello(s);

    return 0;
}