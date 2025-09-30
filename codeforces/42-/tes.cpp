// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    vector<pair<int, int>> com(t);
    vector <int> c(t);
    
    for (int i=0;i<t;i++){
        cin >> com[i].first >> com[i].second;
    }
    
    for (int i=0;i<t;i++){
        if (com[i].first % com[i].second == 0) {
            c[i] = com[i].first % com[i].second;
        } else {
            c[i] = com[i].second - com[i].first % com[i].second;
        }
    }
    
    for (int d : c) {
        cout << d << endl;
    }
    
    return 0;
}