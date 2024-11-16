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
// Union-Findで用いる配列を宣言
// parent[i]はiの親の番号を表す
// treeRank[i]はiを根とする木の高さを表す
vector<int> parent, treeRank;
// 初期化: N個の要素でUnion-Findを初期化する
void init(int n) {
    parent.resize(n);
    treeRank.resize(n, 1);
    for (int i = 0; i < n; ++i) parent[i] = i;
}
// find関数: xの属する集合の根を見つける（経路圧縮）
int find(int x) {
    if (parent[x] != x) {
        parent[x] = find(parent[x]); // 経路圧縮
    }
    return parent[x];
}
// unite関数: 2つの要素xとyの属する集合を結合する
void unite(int x, int y) {
    int rootX = find(x);
    int rootY = find(y);

    if (rootX != rootY) {
        if (treeRank[rootX] > treeRank[rootY]) {
            parent[rootY] = rootX;
        } else if (treeRank[rootX] < treeRank[rootY]) {
            parent[rootX] = rootY;
        } else {
            parent[rootY] = rootX;
            treeRank[rootX]++;
        }
    }
}
// same関数: 2つの要素xとyが同じ集合に属するかを判定
bool same(int x, int y) {
    return find(x) == find(y);
}
int main() {
    ll n,q;
    cin >> n >> q;
    init(n);
    for (ll i = 0; i < q; ++i) {
        ll t, u, v;
        cin >> t >> u >> v;
        if (t == 1) {   
            unite(u - 1, v - 1);
        } else {
            if (same(u - 1, v - 1)) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
}