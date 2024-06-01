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
    ll n,m;
    cin >> n >> m;
    vector<ll> a(m),sum(m,0);
    vector<vector<ll>> x(n,vector<ll>(m));
    rep(i,m){
        cin >> a.at(i);
    }

    rep(i,n){
        rep(j,m){
            cin >> x.at(i).at(j);
            sum.at(j)+=x.at(i).at(j);
        }
    }
    rep(i,m){
        if(sum.at(i)<a.at(i)){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}