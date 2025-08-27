// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int n;
    string winner;
    int anton = 0;
    int danik = 0;
    
    cin >> n;
    cin >> winner;
    
    for (int s = 0; s < winner.size(); ++s) {
        if (winner[s] == 'A') {
            anton++;
        } else {
            danik++;
        }
    }
    
    if (anton > danik) {
        cout << "Anton"; 
    } else if(anton < danik) {
        cout << "Danik";
    } else {
        cout<< "Friendship";
    }
    
    
    return 0;
}