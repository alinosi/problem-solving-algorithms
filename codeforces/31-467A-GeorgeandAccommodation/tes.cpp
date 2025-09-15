#include <bits/stdc++.h>

using namespace std;

int main () {

    int n;
    int numberRooms = 0;
    bool found = false;

    cin >> n;

    vector<pair<int, int>> packet(n);
    vector<int> sum;

    for (int i = 0; i < n; ++i) {
        cin >> packet[i].first;
        cin >> packet[i].second;

        sum.push_back(packet[i].second - packet[i].first);
    }

    int idx = 0;

    for (auto c : sum) {
        if (c >= 2) {
            numberRooms++;
        }
        idx++;
    }

    cout << numberRooms;
    

    return 0; 
}