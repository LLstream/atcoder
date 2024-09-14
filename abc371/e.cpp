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
    vector<ll> a(n);
    rep(i,n)cin >> a.at(i);
    ll ans=0;
    vector<ll> last(n+1, 0);
    rep1(i,1,n+1){
        ll x=a.at(i-1);
        ll l=last.at(x);
        ans+=(i-l)*(n-i+1);
        last.at(x)=i;
    }
    cout << ans << endl;
}
