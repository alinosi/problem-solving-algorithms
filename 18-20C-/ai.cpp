#include <bits/stdc++.h>
using namespace std;

struct Edge { int to, w, next; };

const int MAXN = 100000 + 5;
const int MAXM = 200000 + 5;        // 2*m untuk graf tak-berarah
const long long INF = (1LL << 62);  // cukup besar

Edge edges[MAXM];
int head[MAXN];
int edge_cnt;

long long distv[MAXN];
int parentv[MAXN];
bool used[MAXN];

inline void add_edge(int u, int v, int w) {
    edges[++edge_cnt] = {v, w, head[u]};
    head[u] = edge_cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    if (!(cin >> n >> m)) return 0;

    // init head ke -1 hanya untuk 1..n
    for (int i = 1; i <= n; ++i) head[i] = -1;
    edge_cnt = 0;

    for (int i = 0; i < m; ++i) {
        int a, b, w;
        cin >> a >> b >> w;
        add_edge(a, b, w);
        add_edge(b, a, w);
    }

    for (int i = 1; i <= n; ++i) {
        distv[i] = INF;
        parentv[i] = -1;
        used[i] = false;
    }

    priority_queue<pair<long long,int>,
                   vector<pair<long long,int>>,
                   greater<pair<long long,int>>> pq;

    distv[1] = 0;
    pq.push({0, 1});

    while (!pq.empty()) {
        auto [d, u] = pq.top(); pq.pop();
        if (used[u]) continue;
        used[u] = true;
        if (u == n) break; // early exit: jarak ke n sudah final

        for (int e = head[u]; e != -1; e = edges[e].next) {
            int v = edges[e].to;
            int w = edges[e].w;
            long long nd = d + w;
            if (nd < distv[v]) {
                distv[v] = nd;
                parentv[v] = u;
                pq.push({nd, v});
            }
        }
    }

    if (distv[n] == INF) {
        cout << -1;
        return 0;
    }

    // rekontruksi path
    vector<int> path;
    for (int v = n; v != -1; v = parentv[v]) path.push_back(v);
    reverse(path.begin(), path.end());

    for (size_t i = 0; i < path.size(); ++i) {
        if (i) cout << ' ';
        cout << path[i];
    }
    // cout << '\n';
    return 0;
}
