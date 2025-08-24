#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <climits>
using namespace std;


int path(int n, int w) {
    const int INF = INT_MAX;
    int val = 0;
    
    if ( w < n) {
        val = n;
    } else {
        val = w;
    }
    
    vector<vector<pair<int, int>>> adj(val+1);

    for (int i = 0; i < w; i++) {
        int vrtx, first, second = 0;
        cin >> vrtx >> first >> second;  
        adj[vrtx].push_back({first, second});
        adj[first].push_back({vrtx, second});
    }
    
    vector<int> parent(n+1);
    vector<int> path;
    vector<int> dist(n+1, INF);
    vector<bool> visited(n+1, false);
    
    int start = 1;
    dist[start] = 0;

    int u = 0;
    
    for (int count = 0; count < n; ++count) {
        if (count == 0) {
            u = 1;
            parent[u] = 0;
        } else {
            int next = 0;
            int x = -1;
            for (int i = 0; i < adj[u].size(); ++i) {
                if (!visited[adj[u][i].first]) {
                    if (x == -1 || adj[u][x].second > adj[u][i].second) {
                        next = adj[u][i].first;
                        x = i;
                    }
                }
            }
            u = next;
        }
        
        visited[u] = true;
        
        for (auto& edge : adj[u]) {
            int v = edge.first;
            int weight = edge.second;
            if (!visited[v] && dist[u] != INF && dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                parent[v] = u; // new parent after relaxation
            }
        }
        
        if (u == n) {
            break;
        }
    }
    
    if (!parent[n]) {
        return -1;
    } else {
        while (u != 0) {
            path.push_back(u);
            u = parent[u];
        }
        reverse(path.begin(), path.end());
        for (int& v : path) {
            cout << v << " ";
        }
    }
    
    return 0;
}

int main() {
    int n, w;
    cin >> n >> w;
    
    int parent = path(n, w);
    
    if (parent == -1) {
        cout << parent;
    }

    return 0;
}