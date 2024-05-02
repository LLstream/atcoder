#include <bits/stdc++.h>
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
using mint = modint998244353;
#endif
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
int main() {
  ll n,m;
  cin >> n >> m;
  vector<string> s(n);
  rep(i,n){
    cin >> s.at(i);
  }
  sort(s.begin(),s.end());
  do{
    ll check=1;
    rep(i,n-1){
      ll miss=0;
      rep(j,m){
        if(s.at(i).at(j)!=s.at(i+1).at(j))miss++;
      }
      if(miss>1){
        check=0;
      }
    }
    if(check){
      cout << "Yes" << endl;
      return 0;
    }
  }while(next_permutation(s.begin(),s.end()));
  cout << "No" << endl;
}