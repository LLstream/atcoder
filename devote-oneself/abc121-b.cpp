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
  ll n,m,c;
  cin >> n >> m >> c;
  vector<ll> b(m);
  rep(i,m){
    cin >> b.at(i);
  }
  ll ans=0;
  rep(i,n){
    vector<ll> a(m);
    rep(j,m){
    cin >> a.at(j);
    }
    ll cnt=0;
    rep(j,m){
      cnt+=a.at(j)*b.at(j);
    }
    if(c<=0){
      if(-c<cnt){
        ans++;
      }
    }
    else{
      if(-c<cnt){
        ans++;
      }
    }
  }
  cout << ans << endl;
}