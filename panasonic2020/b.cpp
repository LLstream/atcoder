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
    ll h,w;
    cin >> h >> w;
    ll ans=h*w;
    if(h==1||w==1){
        cout << 1 << endl;
        return 0;
    }
    if(h*w%2==1){
        ans++;
    }
    cout << ans/2 << endl;
}