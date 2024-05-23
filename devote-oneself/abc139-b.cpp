#include <bits/stdc++.h>
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
using mint = atcoder::modint998244353;
#endif
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
int main() {
    ll a,b;
    cin >> a >> b;
    rep(i,10000){
        if((a-1)*i+1>=b){
            cout << i << endl;
            return 0;
        }
    }
}