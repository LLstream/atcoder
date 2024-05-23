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
    ll n,ans=10000000000;
    cin >> n;
    vector<ll> x(n);
    rep(i,n){
        cin >> x.at(i);
    }
    rep1(i,1,101){
        ll cnt=0;
        rep(j,n){
            cnt+=(x.at(j)-i)*(x.at(j)-i);
        }
        ans=min(ans,cnt);
    }
    cout << ans << endl;
}