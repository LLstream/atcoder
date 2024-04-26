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
int main(){
  ll n;
  cin >> n;
  rep(i,n){
    if((i+1)%3==0){
      cout << 'x';
    }
    else{
      cout << 'o';
    }
  }
  cout << endl;
}