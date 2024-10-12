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
  if(n<=3){
    vector<ll> a(3);
    a.at(0)=a.at(1)=0;
    a.at(2)=1;
    cout << a.at(n-1) << endl;
    return 0;
  }
  vector<ll> a(n);
  a.at(0)=a.at(1)=0;
  a.at(2)=1;
  rep(i,n-3){
    a.at(i+3)=a.at(i)+a.at(i+1)+a.at(i+2);
    a.at(i+3)%=10007;
  }
  cout << a.at(n-1)%10007 << endl;
}