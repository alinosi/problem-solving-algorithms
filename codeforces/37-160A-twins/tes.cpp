#include <bits/stdc++.h>

using namespace std;

int main () {
    
    int n;
    int total=0;
    int minimum = 0;
    int compare = 0;
    
    cin >> n;

    vector<int> values(n);
    
    for (int i = 0; i < n; i++) {
        cin >> values[i];
        total+=values[i];
    }

    sort(values.rbegin(), values.rend());

    for (auto value : values) {
        minimum++;
        compare += value;
        if (compare > total/2) {
            break;
        }
    }

    cout << minimum;

    return 0;
}