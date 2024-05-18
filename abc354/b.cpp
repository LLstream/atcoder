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
    vector<string> s(n);
    vector<ll> c(n);
    ll sum=0;
    rep(i,n){
      cin >> s.at(i) >> c.at(i);
      sum+=c.at(i);
    }
    ll ans=sum%n;
    sort(s.begin(),s.end());
    cout << s.at(ans) << endl;
}