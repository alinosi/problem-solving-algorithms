#include <bits/stdc++.h>

using namespace std;

int main () {

    int n, t;
    string q;

    cin >> n >> t;
    cin >> q;

    for (int h = 0; h < t; ++h) {
        for (int i =0 ;i< q.size() - 1 ; ++i) {
            if (q[i] == 'B' && q[i+1] == 'G') {
                swap(q[i], q[i+1]);
                ++i;
            }
        }
    }

    cout << q;

    return 0;
}