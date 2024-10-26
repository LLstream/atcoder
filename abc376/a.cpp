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
    ll n,c;
    cin >> n >> c;
    vector<ll> t(n);
    rep(i,n){
        cin >> t.at(i);
    }
    ll now=t.at(0),ans=1;
    rep(i,n-1){
        if(t.at(i+1)>=now+c){
            ans++;
            now=t.at(i+1);
        }
    }
    cout << ans << endl;
}