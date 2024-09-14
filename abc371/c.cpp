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
int main() {
    ll n;
    cin >> n;
    vector<vector<ll>> g(n,vector<ll>(n)),h(n,vector<ll>(n));
    ll mg,mh;
    cin >> mg;
    rep(i,mg){
        ll u,v;
        cin >> u >> v;
        g.at(u-1).at(v-1)++;
        g.at(u-1).at(v-1)++;
    }
    cin >> mh;
    rep(i,mh){
        ll u,v;
        cin >> u >> v;
        h.at(u-1).at(v-1)++;
        h.at(u-1).at(v-1)++;
    }
    map<pair<ll,ll>,ll> k;
    rep(i,n){
        rep(j,n-i){
            ll a;
            cin >> a;
            k[{i,j}]=a;
        }
    }
    ll ans=0;
    rep(i,n){
        rep(j,n-i){
            if(h.at(i).at(n-1-j)!=g.at(i).at(n-1-j)){
                ans+=k[{i,n-1-j}];
            }
        }
    }
    cout << ans << endl;
}