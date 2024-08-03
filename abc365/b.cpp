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
        ll aa;
        cin >> aa;
        a.at(i)={aa,i};
    }
    sort(a.begin(),a.end());
    cout << a.at(a.size()-2).second+1 << endl;
}