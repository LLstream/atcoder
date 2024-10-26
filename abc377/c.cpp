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
    vector<ll> a(m),b(m);
    rep(i,m) cin >> a[i] >> b[i];
    set<pair<ll,ll>> s;
    unsigned long long ans=n*n;
    rep(i,m){
        vector<pair<ll, ll>> moves = {
            {2, 1}, {1, 2}, {-1, 2}, {-2, 1},
            {-2, -1}, {-1, -2}, {1, -2}, {2, -1}
        };
        if (s.find({a[i], b[i]}) == s.end()) {
                ans--;
                s.insert({a[i], b[i]});
            }
        for (auto [dx, dy] : moves) {
            ll ni = a[i] + dx;
            ll nj = b[i] + dy;
            if (ni >= 1 && ni <= n && nj >= 1 && nj <= n) {
            if (s.find({ni, nj}) == s.end()) {
                ans--;
                s.insert({ni, nj});
            }
            }
        }
    }
    cout << ans << endl;
}