#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        string S;
        cin >> N >> S;

        int lastNonA = -1;
        for (int i = N - 1; i >= 0; i--) {
            if (S[i] != 'A') {
                lastNonA = i;
                break;
            }
        }

        if (lastNonA == -1) {
            cout << "Vidia\n";
        } else {
            int val = S[lastNonA] - 'A';
            if (val % 2 == 1) cout << "Arka\n";
            else cout << "Vidia\n";
        }
    }

    return 0;
}
