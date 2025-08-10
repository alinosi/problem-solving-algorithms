// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {

    int x;
    int steps;

    cin >> x;
    
    if (x > 5) {
        if (x % 5 != 0) {
            steps = (x / 5) + 1; 
        } else {
            steps = x / 5;
        }
    } else {
        steps = 1;
    }
    
    cout << steps;
    
    return 0;

}