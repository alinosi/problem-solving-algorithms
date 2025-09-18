#include <bits/stdc++.h>

using namespace std;

int main () {
    int qty;
    
    cin >> qty;
    
    vector <int> numbers(qty);
    
    for (int i = 1;i<= qty; ++i) {
        int gave = 0;
        cin >> gave; 
        numbers[gave - 1] = i;
    }

    for (int number : numbers) {
        cout << number << " ";
    }

    return 0;
}