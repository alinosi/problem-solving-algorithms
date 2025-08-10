#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int INF = 1e9; 

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<vector<pair<int, int>>> jembatan(n + 1); 
    
    for (int i = 0; i < k; i++) {
        int asal, tujuan, biaya1, biaya2;
        cin >> asal >> tujuan >> biaya1 >> biaya2;
        jembatan[asal].push_back({tujuan, biaya1});
        jembatan[tujuan].push_back({asal, biaya1 + biaya2});
    }
    
    int ta, ti;
    cin >> ta >> ti;

    vector<int> jarak(n + 1, INF);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> antrian;
    
    jarak[ta] = 0;
    antrian.push({0, ta});

    while (!antrian.empty()) {
        int sekarang = antrian.top().first;
        int pulau = antrian.top().second;
        antrian.pop();
        
        if (sekarang > jarak[pulau]) continue;

        for (auto &j : jembatan[pulau]) {
            int tujuan = j.first;
            int total = sekarang + j.second;

            if (total< jarak[tujuan]) {
                jarak[tujuan] = total;
                antrian.push({total, tujuan});
            }
        }
    }

    cout << (jarak[ti] == INF ? -1 : jarak[ti]) << endl;

    return 0;
}