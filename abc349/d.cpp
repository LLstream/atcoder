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
  ll a,b;
  cin >> a >> b;
  vector<ll> ans(0);
  while(true){
    ans.push_back(b);
    if(b==a){
      ans.push_back(a);
      break;
    }
    if(b%2==1){
      b--;
      continue;
    }
    ll c=b,d=1;
    while(true){
      c/=2;
      d*=2;
      if(c%2==1){
        break;
      }
    }
    while(true){
      if(a<=b-d){
        b-=d;
        break;
      }
      else{
        d/=2;
      }
    }
  }
  cout << ans.size()-2 << endl;
  reverse(ans.begin(),ans.end());
  rep(i,ans.size()){
    cout << ans.at(i) << ' ' << ans.at(i+1) << endl;
  }
}