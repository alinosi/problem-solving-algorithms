#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <climits>
using namespace std;

int main() {
    const int INF = INT_MAX;
    int n;

    cin >> n; // input the number of vertex
    
    // problem, the edges must input manually
    vector<vector<pair<int, int>>> adj = {
        {{1, 2}},           // v0 -> v1 (weight 2)
        {{0, 2}, {2, 4}},   // v1 -> v0 (weight 2), v1 -> v2 (weight 4)
        {{1, 4}}            // v2 -> v1 (weight 4)
    };

    for (int i = 1; i <= n; i++) {
        
    }


    vector<int> parent;
    
    vector<int> dist(n, INF);
    vector<bool> visited(n, false);
    
    int start = 0;
    dist[start] = 0;
    
    for (int count = 0; count < n; count++) {
        int u = -1;
        for (int v = 0; v < n; v++) {
            if (!visited[v] && (u == -1 || dist[v] < dist[u])) {
                u = v;
            }
        }
        
        visited[u] = true;
        
        for (auto& edge : adj[u]) {
            int v = edge.first; // represetation vertex
            int weight = edge.second; // representation weight
            
            if (!visited[v] && dist[u] != INF && dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
            }
        }
    }
    
    cout << "\nOriginal format: ";
    for (int path : parent) {
        cout << path << " ";
    }

    return 0;
}