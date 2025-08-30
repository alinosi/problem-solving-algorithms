#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<pair<int, string>> games(n);
    vector<string> winners(n);

    for (auto& g : games) {
        cin >> g.first >> g.second;
    }
    
    for (int i = 0; i < n; ++i) {
        int turn = 0;
        bool winner = false;
        int iterasi = 0;
        while (winner != true) {
            turn++;
            for (char& check : games[i].second) {
                if ( check != 'A' ) {
                    --check;
                } else {
                    ++iterasi;
                }
            }
            if (iterasi == games[i].first) {
                if (turn % 2 == 0) {
                    winners.push_back("Arka");
                    winner = true;
                } else {
                    winners.push_back("Vidia");
                    winner = true;
                }
            }
        }
    }
    
    for (string& w : winners) {
        cout << w << endl;
    }
    
    return 0;
}