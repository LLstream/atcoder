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
    ll x,sum=0;
    cin >> x;
    rep(i,10){
        rep(j,10){
            if(i*j!=x){
                sum+=i*j;
            }
        }
    }
    cout << sum << endl;
}