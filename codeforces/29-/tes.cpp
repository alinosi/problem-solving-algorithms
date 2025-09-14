#include <bits/stdc++.h>

using namespace std;

int main () {

    int n, t;
    string q;
    char tempt;

    cin >> n >> t;
    cin >> q;

    for (int h = 0; h < t; ++h) {
        for (int i =0 ;i< q.size() - 1 ; ++i) {
            if (q[i] == 'B' && q[i+1] == 'G') {
                tempt = q[i];
                q[i] = q[i+1];
                q[i+1] = tempt;
                ++i;
            }
        }
    }

    cout << q;

    return 0;
}