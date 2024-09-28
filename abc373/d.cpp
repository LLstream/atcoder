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

struct UnionFind {
    vector<int> parent;
    vector<ll> diff_weight;
    UnionFind(int n):parent(n+1),diff_weight(n+1,0){
        for(int i=1;i<=n;i++)parent.at(i)=i;
    }
    int find(int x){
        if(parent.at(x)==x)return x;
        int r=find(parent.at(x));
        diff_weight.at(x)+=diff_weight.at(parent.at(x));
        return parent.at(x)=r;
    }
    ll weight(int x){
        find(x);
        return diff_weight.at(x);
    }
    bool unite(int x, int y, ll w) { // weight[y] - weight[x] = w
        ll wx=weight(x);
        ll wy=weight(y);
        w = w+wx-wy;
        x = find(x);
        y = find(y);
        if(x==y){
            return w==0;
        }
        parent.at(x)=y;
        diff_weight.at(x)=-w;
        return true;
    }
};
int main(){
    ll n,m;
    cin >> n >> m;
    UnionFind uf(n);
    bool ok=true;
    rep(i,m){
        ll u,v,w;
        cin >> u >> v >> w;
        if(!uf.unite(u,v,w)){
            ok=false;
            break;
        }
    }
    rep1(i,1,n+1){
        cout << uf.weight(i) << " ";
    }
    cout << endl;
}
