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
  vector<ll> u(m),v(m);
  vector<bool> empty(n,true);
  rep(i,m){
    cin >> u.at(i) >> v.at(i);
    empty.at(v.at(i)-1)=false;
    empty.at(u.at(i)-1)=false;
  }
  vector<pair<ll,ll>> change(0);
  vector<ll> a(n),b(n);
  ll numar=0,numbr=0;
  rep(i,n){
    cin >> a.at(i);
    if(a.at(i)==0)numar++;
  }
  rep(i,n){
    cin >> b.at(i);
    if(b.at(i)==0)numbr++;
  }
  ll ans=0;
  if(n==2&&m==0&&a.at(0)!=b.at(0)){
    cout << -1 << endl;
    return 0;
  }
  rep(i,n){
    if(a.at(i)==b.at(i)){
      continue;
    }
    else if(a.at(i)!=b.at(i)&&empty.at(i)){
      ans++;
      change.push_back({i+1,b.at(i)});
    }
    else{
      cout << -1 << endl;
      return 0;
    }
  }
  sort(change.begin(),change.end());
  cout << ans << endl;
  if(ans>=2){
    ll kyoukai=0;
    rep1(i,1,change.size()){
      if(change.at(i-1)!=change.at(i)){
        kyoukai=i;
      }
    }
    ll tmp;
    tmp = change.at(kyoukai).first;
    change.at(kyoukai).first = change.at(kyoukai - 1).first;
    change.at(kyoukai - 1).first = tmp;

    tmp = change.at(kyoukai).second;
    change.at(kyoukai).second = change.at(kyoukai - 1).second;
    change.at(kyoukai - 1).second = tmp;
  }
  rep(i,change.size()){
    cout << change.at(i).first << " " << change.at(i).second << endl;
  }
}