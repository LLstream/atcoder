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
    ll h,w,mx=0;
    cin >> h >> w;
    vector<vector<ll>> a(h,vector<ll>(w));
    rep(i,h){
        rep(j,w){
            cin >>a.at(i).at(j);
            mx=max(mx,a.at(i).at(j));
        }
    }
    cout << mx << endl;
}