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
  ll n,sum=0;
  cin >> n;
  vector<ll> a(n);
  rep(i,n){
    cin >> a.at(i);
    sum+=a.at(i);
  }
  sort(a.begin(),a.end());
  int r=n;
  ll cnt=0;
  for(int i=0;i<n;i++){
    r=max(r,i+1);
    while(r-1>i&&a.at(r-1)+a.at(i)>=100000000){
      r--;
    }
    cnt+=n-r;
  }
  cout << sum*(n-1)-cnt*100000000 << endl;
}
