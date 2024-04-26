#include <bits/stdc++.h>
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
using namespace std;
using ll = long long;
using mint = modint998244353;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
int main() {
  ll n,a,c;
  cin >> n;
  vector<pair<ll,ll>> s(n);
  rep(i,n){
    cin >> a >> c;
    s.at(i).first=c;
    s.at(i).second=a;
  }
  sort(s.rbegin(),s.rend());
  ll m=0;
  rep(i,n){
    if(i!=n-1){
      if(s.at(i).first!=s.at(i+1).first){
        m=max(m,s.at(i).second);
      }
    }
    else{
      m=max(m,s.at(i).second);
    }
  }
  cout << m << endl;
}