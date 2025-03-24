#include <iostream>

using namespace std;

const long long MOD = 998244353;

long long hitung_fpb(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long faktor = 1;


    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { // j selalu lebih besar dari i
            long long fpb = hitung_fpb(a[i], a[j]); // Hitung GCD yang benar
            faktor = (faktor * fpb) % MOD;
        }
    }

    cout << faktor << endl;
    return 0;
}
