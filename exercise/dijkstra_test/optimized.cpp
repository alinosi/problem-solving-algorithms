#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <climits>
using namespace std;

int main() {
    const int INF = INT_MAX;
    int n = 3; // number of vertices
    
    // Graph representation
    vector<vector<pair<int, int>>> adj = {
        {{1, 2}},           // v0 -> v1 (weight 2)
        {{0, 2}, {2, 4}},   // v1 -> v0 (weight 2), v1 -> v2 (weight 4)
        {{1, 4}}            // v2 -> v1 (weight 4)
    };
    
    // Initialize distances and visited array
    vector<int> dist(n, INF);
    vector<bool> visited(n, false);
    
    int start = 0;
    dist[start] = 0;
    
    // Main Dijkstra loop
    for (int count = 0; count < n; count++) {
        // Find unvisited vertex with minimum distance
        int u = -1;
        for (int v = 0; v < n; v++) {
            if (!visited[v] && (u == -1 || dist[v] < dist[u])) {
                u = v;
            }
        }
        
        // Mark current vertex as visited
        visited[u] = true;
        
        // Update distances to adjacent vertices
        for (auto& edge : adj[u]) {
            int v = edge.first;
            int weight = edge.second;
            
            if (!visited[v] && dist[u] != INF && dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
            }
        }
    }
    
    // Print results
    cout << "Shortest distances from vertex " << start << ":" << endl;
    for (int i = 0; i < n; i++) {
        cout << "To vertex " << i << ": ";
        if (dist[i] == INF) {
            cout << "INF" << endl;
        } else {
            cout << dist[i] << endl;
        }
    }
    
    // Original format output
    cout << "\nOriginal format: ";
    for (int path : dist) {
        cout << path;
    }
    cout << endl;
    
    return 0;
}