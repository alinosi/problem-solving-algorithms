// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
    int INF = 99999999;
    int nextNode = 0;
    
    vector<int> vertex = {0, 1, 2};
    vector<vector<pair<int, int>>> adj = {
        {{1, 2}}, // v0.
        {{0, 2}, {2, 4}}, // v1 
        {{1, 4}} // v2
    };

    vector<int> dist = {0, 2, INF};
    vector<bool> visited = {true, false, false};

    // start from v0
    int u = 0;
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
            if (adj[u].size() == 1) {
                nextNode = adj[u][0].first;
            } else {
                // compare the weight of edges
                for (int k = j+1; k < adj[u].size(); k++ ) {
                    if (dist[adj[u][j].first] < dist[adj[u][k].first]) {
                        if (visited[adj[u][k].first] == true) { 
                            continue; // skip iteration
                        } else {
                            nextNode = adj[u][k].first;
                            j = adj[u][k].first;
                        }
                    }
                }
            }

            u = nextNode;
            visited[u] = true;
        }
    }

    for (int path : dist) {
        cout << path;
    }

    return 0;
}