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
  ll a=0,b=0;
  rep(i,9){
    int c;
    cin >> c;
    a+=c;
  }
  rep(i,8){
    int c;
    cin >> c;
    b+=c;
  }
  cout << a-b+1 << endl;
}