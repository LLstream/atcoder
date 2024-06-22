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
    ll  n;
    cin >> n;
    ll ans=0;
    rep(i,n){
        string s;
        cin >> s;
        if(s=="Takahashi"){
            ans++;
        }
    }
    cout << ans << endl;
}