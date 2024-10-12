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
    ll n,ans=0;
    cin >> n;
    string s;
    cin >> s;
    rep(i,n-2){
        if(s.at(i)=='#'&&s.at(i+1)=='.'&&s.at(i+2)=='#'){
            ans++;
        }
    }
    cout << ans << endl;
}