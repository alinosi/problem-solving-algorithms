#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, idx;
    cin >> n >> idx;

    long long half = (n + 1) / 2; 
    long long Un;

    if (idx <= half) {
        Un = 1 + (idx - 1) * 2;
    } else {
        Un = 2 + (idx - half - 1) * 2;
    }

    cout << Un;
    return 0;
}
