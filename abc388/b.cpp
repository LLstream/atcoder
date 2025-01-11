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
    ll n,d;
    cin >> n >> d;
    vector<ll> t(n),l(n);
    rep(i,n){
        cin >> t.at(i) >> l.at(i);
    }
    rep(i,d){
        ll mx=0;
        rep(j,n){
            mx=max(mx,t.at(j)*(l.at(j)+i+1));
        }
        cout << mx << endl;
    }
}