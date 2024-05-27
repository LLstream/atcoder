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
  ll n,Alice=0,Bob=0;
  cin >> n;
  vector<ll> a(n);
  rep(i,n){
    cin >> a.at(i);
  }
  sort(a.rbegin(),a.rend());
  rep(i,n){
    if(i%2==0){
      Alice+=a.at(i);
    }
    else{
      Bob+=a.at(i);
    }
  }
  cout << Alice-Bob << endl;
}