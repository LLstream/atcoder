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
    string s;
    cin >> s;
    ll ans=0;
    vector<pair<ll,ll>> a(26,{0,0});
    rep(i,s.size()){
      a.at(s.at(i)-'A').first++;
      if(a.at(s.at(i)-'A').first>1){
        ans+=i*(a.at(s.at(i)-'A').first-1)-a.at(s.at(i)-'A').second-a.at(s.at(i)-'A').first+1;
      }
      a.at(s.at(i)-'A').second+=i;
    }
    cout << ans << endl;
}