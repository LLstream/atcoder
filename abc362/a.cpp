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
    ll r,g,b;
    cin >> r >> g >> b;
    string s;
    cin >> s;
    ll ans;
    if(s.at(0)=='R'){
        ans=min(g,b);
    }
    if(s.at(0)=='G'){
        ans=min(r,b);
    }
    if(s.at(0)=='B'){
        ans=min(r,g);
    }
    cout << ans << endl;
}