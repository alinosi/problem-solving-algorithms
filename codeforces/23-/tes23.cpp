// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int n;
    int sum = 0;
    int best = 0;
    cin >> n;
    vector<pair<int, int>> passangers(n);
    
    for (auto& passanger : passangers) {
        cin >> passanger.first >> passanger.second;
        sum -= passanger.first;
        sum += passanger.second;
        if ( sum > best) {
            best = sum;
        }
    }
    
    cout << best;
    
    return 0;
}