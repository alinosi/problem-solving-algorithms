// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <climits>

using namespace std;

int main() {
    const int INF = INT_MAX;
    
    vector<int> vertex = {0, 1, 2}; // inialisasi manual tidak efektif
    // variable ini tidak digunakan, berarti hanya perlu jumlah dari vertex
    // int n = 3; di mana n adalah jumlah vertex

    // variable ini yang berperan sebagai identitas utama dari vertex
    vector<vector<pair<int, int>>> adj = {
        {{1, 2}}, // v0.
        {{0, 2}, {2, 4}}, // v1 
        {{1, 4}} // v2
    };


    /*
    how to input a value into vector 

    vector<int> numbers(3);

    visualization :
    
    {v, v, v, v}

    so to input it to vector u must loop the vector and input it to the choosen elemtn, ex :

    cin >> numbers{2} = 3;

    {v, v, 3, v}

    so if the vector is vector on the vector the visualization is : 

    {{ v, v, v }, {v, v, v}}

    to input it you can write :
    cin >> numbers[0][0] = 3;

    {{ 3, v, v }, {v, v, v}}

    */ 
    
    vector<int> dist = {0, 2, INF};
    // inialisi langsung(construct), n buah vector dengan masing-masing nilai = INF
    // vector<int> dist(n, INF); 

    vector<bool> visited = {true, false, false};
    // inialisi langsung(construct), n buah vector dengan masing-masing nilai = false
    // vector<int> dist(n, INF); 


    // start from v0
    int u = 0; // u is our vertex locations right now 
    while (find(visited.begin(), visited.end(), false) != visited.end()) {
        // check the adjacency list
        for (auto edges : adj[u]) {
            // relaxation
            if (visited[edges.first] == false) {
                if (dist[u] + edges.second < dist[edges.first]) {
                    dist[edges.first] = dist[u] + edges.second;
                }
            }
        }
        // chose the next node
        for (int j = 0; j < adj[u].size(); j++) {
            if (adj[u].size() == 1) { // apakah node terdekat hanya berjumlah 1
                u = adj[u][0].first; // langsung tentukan node berikutnya
            } else { 
                // compare the weight of edges
                for (int k = j+1; k < adj[u].size(); k++ ) {
                    if (dist[adj[u][j].first] < dist[adj[u][k].first]) {
                        if (visited[adj[u][k].first] == true) { 
                            continue; // skip iteration
                        } else {
                            u = adj[u][k].first;
                            j = adj[u][k].first;
                        }
                    }
                }
            }

            u = u;
            visited[u] = true;
        }

        
    }

    for (int path : dist) {
        cout << path;
    }

    return 0;
}