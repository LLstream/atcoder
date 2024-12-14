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
    ll n,r;
    cin >> n >> r;
    vector<ll> d(n),a(n);
    rep(i,n){
        cin >> d.at(i) >> a.at(i);
    }
    rep(i,n){
        if(d.at(i)==1){
            if(1600<=r&&r<=2799){
                r+=a.at(i);
            }
        }
        else{
            if(1200<=r&&r<=2399){
                r+=a.at(i);
            }
        }
    }
    cout << r << endl;
}