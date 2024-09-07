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
  deque<ll> a(n);
  rep(i,n){
    cin >> a.at(i);
  }
  sort(a.begin(),a.end());
  rep1(i,1,n){
    if(a.at(i-1)==a.at(i)){
      a.erase(a.begin()+i);
      i--;
      n--;
    }
  }
  ll ans=0;
  set<ll> check;
  rep(i,a.size()){
    rep(j,a.size()){
      rep(k,a.size()){
        ll kari=a.at(i)+a.at(j)+a.at(k);
        if(!check.count(kari)){
          ans=ans^kari;
          check.insert(kari);
        }
      }
    }
  }
  cout << ans << endl;
}