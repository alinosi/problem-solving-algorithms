// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

using namespace std;

int main() {
    
    string a, b;
    vector <int> c;
    cin >> a >> b;
    
    for (int i = 0; i< a.size(); ++i) {
        if (a[i] != b[i]) {
            c.push_back(1);
        } else {
            c.push_back(0);
        }
    }
    
    for (int i : c) {
        cout << i;
    }
    
    return 0;
}