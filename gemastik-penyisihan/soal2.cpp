#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t;
    ll n, k, total = 0;

    cin >> t;    
    vector<int> memory(t);

    for (int i=0; i<t; i++) {
        cin >> n >> k;
        total = pow(2, n);
        if (k == total) {
            memory[i] = log2(total);
        } else {
            memory[i] = floor(log2(k)) + 1;
        }

        total = 0; 
    }


    for(int c : memory) {
        cout << c << endl;
    }
}