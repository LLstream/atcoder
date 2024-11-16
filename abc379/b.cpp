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
    ll n,k,ans=0;
    cin >> n >> k;
    string s;
    cin >> s;
    rep(i,n-k+1){
      ll check=1;
        rep1(j,i,i+k){
          if(s.at(j)=='X'){
            check=0;
            break;
          }
        }
      ans+=check;
      if(check==1){
        rep1(j,i,i+k){
          s.at(j)='X';
        }
      }
    }
    cout << ans << endl;
}