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
    vector<ll> a(4);
    rep(i,4){
        ll b;
        cin >> b;
        a.at(b-1)++;
    }
    ll ans = 0;
    rep(i,4){
        ans+=a.at(i)/2;
    }
    cout << ans << endl;
}