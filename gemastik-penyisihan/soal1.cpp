#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, a, b;
    cin >> n >> a >> b;

    vector<long long> goods(n);
    for (long long& i : goods) {
        cin >> i;
    }

    sort(goods.rbegin(), goods.rend());

    long long sum = 0;
    long long group_size = a + b;

    for (int i = 0; i < n; i++) {
        if (i % group_size < a) {
            sum += goods[i];
        }
    }

    cout << sum << endl;

    return 0;
}