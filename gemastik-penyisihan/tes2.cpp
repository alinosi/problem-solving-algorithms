#include <iostream>
#include <algorithm>

using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast_io;

    int t;
    if (!(cin >> t)) return 0;

    long long n, k;
    
    while (t--) {
        cin >> n >> k;
               
        long long log_val = 63 - __builtin_clzll(k);
        
        cout << min(n, log_val + 1) << "\n";
    }

    return 0;
}