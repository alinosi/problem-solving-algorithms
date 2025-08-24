#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <climits>
using namespace std;

int main() {
    const int INF = INT_MAX;
    int n, w;
    cin >> n >> w;
    
    vector<vector<pair<int, int>>> adj(w);

    for (int i = 0; i<w; i++) {
        int vrtx, first, second = 0;
        cin >> vrtx >> first >> second;  
        adj[vrtx].push_back({first, second});
        adj[first].push_back({vrtx, second});
    }
    
    vector<int> parent;
    
    vector<int> dist(n+1, INF);
    vector<bool> visited(n+1, false);
    
    int start = 1;
    dist[start] = 0;
    
    // choose next node
    int u = 0;
    
    for (int count = 0; count < n; count++) {
        // int u = -1;
        // for (int v = 1; v <= n; v++) {
        //     if (!visited[v] && (u == -1 || dist[v] < dist[u])) {
        //         u = v;
        //     }
        // }
        if (count == 0) {
            u = 1;
        } else {
            int next = 0;
            for (int i = 0; i < adj[u].size() - 1; ++i) {
                if (!visited[adj[u][i].first]) {
                    if (adj[u][i].second > adj[u][i+1].second) {
                        next = adj[u][i+1].first;   
                    } else {
                        next = adj[u][i].first;
                    }
                }
            }
            u = next;
        }
        
        visited[u] = true;
        parent.push_back(u);
        
        for (auto& edge : adj[u]) {
            int v = edge.first;
            int weight = edge.second;
            
            if (!visited[v] && dist[u] != INF && dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
            }
        }
        
        if ( u == n) {
            break;
        }
    }
    
    cout << "\nOriginal format: ";
    for (int path : parent) {
        cout << path << " ";
    }

    cout << "\nOriginal format: ";
    for (int path : dist) {
        cout << path << " ";
    }

    return 0;
}