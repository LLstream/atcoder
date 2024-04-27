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
  vector<vector<char>> a(n,vector<char>(n));
  vector<vector<char>> b(n,vector<char>(n));
  rep(i,n){
    rep(j,n){
      cin >> a.at(i).at(j);
    }
  }
  rep(i,n){
    rep(j,n){
      cin >> b.at(i).at(j);
      if(a.at(i).at(j)!=b.at(i).at(j)){
        cout << i+1 << " " << j+1 << endl;
        return 0;
      }
    }
  }
}