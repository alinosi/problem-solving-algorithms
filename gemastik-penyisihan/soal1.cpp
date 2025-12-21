#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, a, b;
    long long sum = 0;
    
    cin >> n >> a >> b;

    long long chcp = a+b;

    vector<long long>goods(n);

    for (long long& i : goods) {
        cin >> i;
    }

    sort(goods.rbegin(), goods.rend());
    
    if ( n == a+b) {
        for (long long i = 0; i <a ; ++i) {
            sum+= goods.at(i);
        }
    } else if ( n < a + b) {
        for (long long n : goods) {
            sum+= n;
        }
    } else {
        long long counter = 0;
        for (long long i = 0; i < n; i++) {
            if (n - i < chcp && counter == 0) {
                for (long long j = i; j< n; j++) {
                    sum += goods.at(j);
                }
                i = n-1;
            } else {
                if ( counter > 0 && counter % a == 0) {
                    i += b - 1; // 3
                    counter = 0;
                } else {
                    sum += goods.at(i);
                    counter++;
                }
            }
        }
    }

    cout << sum;

}