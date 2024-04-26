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
  ll h,w;
  cin >> h >> w;
  vector<vector<char>> a(h,vector<char>(w));
  ll sth,stw,goh,gow;
  rep(i,h){
    rep(j,w){
      cin >> a.at(i).at(j);
      if(a.at(i).at(j)=='S'){
        sth=i;
        stw=j;
      }
      if(a.at(i).at(j)=='T'){
        goh=i;
        gow=j;
      }
    }
  }
  ll n;
  cin >> n;
  vector<ll> x(n);
  vector<ll> y(n);
  vector<ll> e(n);
  rep(i,n){
    cin >> x.at(i) >> y.at(i) >> e.at(i);
    a.at(x.at(i)).at(y.at(i))='p';
  }
  if(a.at(sth).at(stw)!='p'){
    cout << "No" << endl;
    return 0;
  }
}