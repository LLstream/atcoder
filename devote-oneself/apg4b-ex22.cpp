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
    vector<pair<ll,ll>> a(n);
    rep(i,n){
        ll x,y;
        cin >> x >> y;
        a.at(i).first=y;
        a.at(i).second=x;
    }
    sort(a.begin(),a.end());
    rep(i,n){
        cout << a.at(i).second << " " << a.at(i).first << endl;
    }
}