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
        int counter = 0;
        for (int i = 0; i < n; i++) {
            if ( counter > 0 && counter % a == 0) {
                i += b - 1;
                counter = 0;
            } else {
                sum += goods.at(i);
                counter++;
            }
        }
    }

    cout << sum;

}