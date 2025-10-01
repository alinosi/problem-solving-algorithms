// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    string unique;
    int acc =0;
    cin >> unique;
    
    for (char c : unique) {
        if (c == 'H' || c == 'Q' || c == '9' || c == '+'){
            acc++;
        }
    }
    
    if(acc > 0) { 
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}