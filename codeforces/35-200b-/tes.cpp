#include <bits/stdc++.h>

using namespace std;


int main () {

    double n;
    double sum = 0;

    cin >> n;

    for (int i =0; i < n; ++i) {
        int temp = 0;
        cin >> temp;
        sum+=temp;
    }

    cout << sum/n;

    return 0;
}