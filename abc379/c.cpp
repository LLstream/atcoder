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
  ll n,m,num=0,now;
  cin >> n >> m;
  vector<pair<ll,ll>> x(m);
  rep(i,m){
    cin >> x.at(i).first;
  }
  rep(i,m){
    cin >> x.at(i).second;
    num+=x.at(i).second;
    if(num>n){
      cout << -1 << endl;
      return 0;
    }
  }
  if(num!=n){
    cout << -1 << endl;
    return 0;
  }
  vector<ll> stone(0);
  ll ans=0;
  sort(x.begin(),x.end());
  if(x.at(0).first!=1){
    cout << -1 << endl;
    return 0;
  }
  now=x.at(0).second;
  ll nowp=1;
  rep1(i,1,m){
    if(x.at(i).first-nowp>now){
      cout << -1 << endl;
      return 0;
    }
    ans+=(now+now-(x.at(i).first-nowp))/2*(x.at(i).first-nowp);
    now-=x.at(i).first-nowp;
    now+=x.at(i).second;
    nowp=x.at(i).first;
  }
  ans+=(now+now-(n-nowp))/2*(n-nowp);
  cout << ans+1 << endl;
}
