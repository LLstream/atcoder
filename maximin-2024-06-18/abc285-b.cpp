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
  string s;
  cin >> s;
  rep(i,n-1){
    ll ans=0;
    for(int j=0;j<n-i+1;j++){
      if(j+i+1>n-1){
        break;
      }
      if(s.at(j)!=s.at(j+i+1)){
        ans++;
      }
      else{
        break;
      }
    }
    cout << ans << endl;
  }
  
  // ↓馬鹿
  // vector<ll> slash(0);
  // rep1(i,1,n){
  //   if(s.at(i)==s.at(i-1)){
  //     slash.push_back(i);
  //   }
  // }
  // slash.push_back(n);
  // vector<ll> kazu(0);
  // rep1(i,1,slash.size()){
  //   kazu.push_back(slash.at(i)-slash.at(i-1));
  // }
  
}