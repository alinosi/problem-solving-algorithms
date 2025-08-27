// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int n;
    bool dif = false;
    cin >> n;
    
    vector<int> difficult(n);
    
    for (int& d : difficult) {
        cin >> d;
    }
    
    for (int d : difficult) {
        if (d == 1){
            dif = true;
        }
    }
    
    if (dif) {
        cout << "HARD";
    } else {
        cout << "EASY";
    }
    
    return 0;
}