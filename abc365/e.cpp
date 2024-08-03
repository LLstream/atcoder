// 無理
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
    vector<ll> a(n);
    rep(i,n){
        cin >> a.at(i);
    }
    ll totalXor=0;
    ll currentXor=0;
    rep(i,n-1){
        currentXor^=a.at(i);
        totalXor^=currentXor;
    }
    cout << totalXor << endl;
}