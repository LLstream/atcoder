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
    vector<ll> x(n),c(m),y(m);
    vector<vector<ll>> dp(n+1,vector<ll>(n+1));
    map<ll,ll> a;
    rep(i,n){
      cin >> x.at(i);
    }
    rep(i,m){
      cin >> c.at(i) >> y.at(i);
      a[c.at(i)]=y.at(i);
    }
    rep1(i,1,n+1){
      rep1(j,1,i+1){
        dp.at(i).at(j)=dp.at(i-1).at(j-1)+x.at(i-1)+a[j];
      }
      dp.at(i).at(0)=0;
      rep(j,i){
        dp.at(i).at(0)=max(dp.at(i).at(0),dp.at(i-1).at(j));
      }
    }
  ll ans=0;
  rep(i,n+1){
    ans=max(ans,dp.at(n).at(i));
  }
  cout << ans << endl;
}