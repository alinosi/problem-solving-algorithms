#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main() {
    const int V = 3; // jumlah vertex
    const int INF = numeric_limits<int>::max();

    // adjacency matrix (graf tidak berarah)
    int graph[V][V] = {
        {0, 1, 2}, // v1 ke v2 = 1, v1 ke v3 = 2
        {1, 0, 4}, // v2 ke v1 = 1, v2 ke v3 = 4
        {2, 4, 0}  // v3 ke v1 = 2, v3 ke v2 = 4
    };

    int start = 0; // v1
    int target = 2; // v3

    vector<int> dist(V, INF);
    vector<bool> visited(V, false);

    dist[start] = 0;

    for (int count = 0; count < V - 1; count++) {
        // cari vertex dengan jarak minimum yang belum dikunjungi
        int u = -1;
        int minDist = INF;
        for (int i = 0; i < V; i++) {
            if (!visited[i] && dist[i] < minDist) {
                minDist = dist[i];
                u = i;
            }
        }

        visited[u] = true;

        // update jarak ke tetangga
        for (int v = 0; v < V; v++) {
            if (!visited[v] && graph[u][v] != 0 && dist[u] != INF 
                && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    cout << "Jarak terpendek dari v1 ke v3: " << dist[target] << endl;
    return 0;
}




// Adjacency List (vector<vector<Edge>> adj)
    // Menyimpan semua tetangga dari setiap vertex beserta bobotnya.
    // Kalau cuma pakai array 2D untuk graf kecil memang bisa, tapi untuk graf besar adjacency list jauh lebih efisien.

// Priority Queue (priority_queue<...> pq)
    // Untuk mengambil vertex dengan jarak terkecil secara cepat di setiap iterasi.
    // Kalau cuma pakai array, kita harus mencari manual dengan loop, yang membuat kompleksitas naik.

// Visited array (vector<bool> visited)
    // Menandai node yang jaraknya sudah final, supaya tidak diproses lagi.

// Distance array (vector<int> dist)
    // Menyimpan jarak terpendek dari sumber ke setiap vertex.

// Previous array (vector<int> prev)
    // Menyimpan jalur yang dilewati untuk sampai ke node tertentu (rekonstruksi path).