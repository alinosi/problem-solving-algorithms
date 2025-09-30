#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    
    cin >> n;
    int counter = 1;

    while (counter <= n ) {
        if (counter % 2 == 0) {
            if (counter == n) {
                cout << "I love it ";
            } else {
                cout << "I love that ";
            }
        } else {
            if (counter == n) {
                cout << "I hate it ";
            } else {
                cout << "I hate that ";
            }
        }
        ++counter;
    }
    
    return 0;
}