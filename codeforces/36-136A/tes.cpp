#include <bits/stdc++.h>

using namespace std;

void modular(auto number) {

    for (auto n : number) {
        cout << number;
    }
}


int main () {
    int qty;
    
    cin >> qty;
    
    vector <int> numbers(qty);
    
    for (int i = 0;i< qty; ++i) {
        cin >> numbers[i];
    }

    modular(numbers);

    return 0;
}