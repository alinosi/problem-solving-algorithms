#include <bits/stdc++.h>

using namespace std;

int main () {

    long long n, idx;
    long long Un;

    cin >> n >> idx;

    if (n % 2 == 0) {
        if (idx > n/2) {
            Un = 2 + (idx - 1 - n/2) * 2;
        } else {
            Un = 1 + (idx - 1) * 2;
        }
    } else {
        if (idx > n/2 + 1) {
            Un = 2 + (idx - 2 - n/2) * 2;
        } else {
            Un = 1 + (idx - 1) * 2;
        }
    }

    cout << Un;

    return 0;
}