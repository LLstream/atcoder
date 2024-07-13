#include <bits/stdc++.h>
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
using mint = modint998244353;
#endif
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
using P = pair<ll, ll>;
vector<ll> dijkstra(int N, const vector<vector<P>>& graph, const vector<ll>& vertex_weights) {
    vector<ll> dist(N, LLONG_MAX);
    priority_queue<P, vector<P>, greater<P>> pq;
    dist[0] = vertex_weights[0];
    pq.emplace(dist[0], 0);
    while (!pq.empty()) {
        auto [current_weight, u] = pq.top();
        pq.pop();
        if (dist[u] < current_weight) continue;
        for (auto [w, v] : graph[u]) {
            ll new_weight = current_weight + w + vertex_weights[v];
            if (new_weight < dist[v]) {
                dist[v] = new_weight;
                pq.emplace(new_weight, v);
            }
        }
    }
    return dist;
}
int main() {
    int n, m;
    cin >> n >> m;
    vector<ll> a(n);
    rep(i,n){
        cin >> a.at(i);
    }
    vector<vector<P>> graph(n);
    rep(i,m){
        int u,v;
        ll b;
        cin >> u >> v >> b;
        u--;
        v--;
        graph.at(u).emplace_back(b,v);
        graph.at(v).emplace_back(b,u);
    }
    vector<ll> minw=dijkstra(n,graph,a);
    rep1(i,1,n) {
        cout << minw.at(i);
        if(i!=n-1){
            cout << " ";
        }
        else{
            cout << endl;
        }
    }
    return 0;
}
