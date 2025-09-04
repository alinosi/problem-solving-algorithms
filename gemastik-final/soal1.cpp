#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    int sum = 0;

    cin >> n >> a >> b;

    vector<int>goods(n);

    for (int& i : goods) {
        cin >> i;
    }

    sort(goods.rbegin(), goods.rend());
    
    if ( n == a+b) {
        for (int i = 0; i <a ; ++i) {
            sum+= goods.at(i);
        }
    } else if ( n < a + b) {
        for (int n : goods) {
            sum+= n;
        }
    } else {
        for (int i = 0; i < n; i++) {
            sum+= goods.at(i);
        }
    }

    cout << sum;

}