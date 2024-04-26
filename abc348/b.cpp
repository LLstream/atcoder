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
  ll n;
  cin >> n;
  vector<ll> x(n);
  vector<ll> y(n);
  rep(i,n){
    cin >> x.at(i) >> y.at(i);
  }
  ll m=0,num;
  rep(i,n){
    m=0;
    rep(j,n){
      if(m<(x.at(i)-x.at(j))*(x.at(i)-x.at(j))+(y.at(i)-y.at(j))*(y.at(i)-y.at(j))){
        m=(x.at(i)-x.at(j))*(x.at(i)-x.at(j))+(y.at(i)-y.at(j))*(y.at(i)-y.at(j));
        num=j;
      }
    }
    cout << num+1 << endl;
  }
}