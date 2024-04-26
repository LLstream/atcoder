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
  string s,t;
  cin >> s >> t;
  ll j=0;
  rep(i,s.size()){
    if(s.at(i)==t.at(j)+32){
      if(j==2){
        cout << "Yes" << endl;
        return 0;
      }
      else if(j==1&&t.at(2)=='X'){
        cout << "Yes" << endl;
        return 0;
      }
      else{
        j++;
      }
    }
  }
  cout << "No" << endl;
}