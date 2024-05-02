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
    ll  n,a,b;
    cin >> n >> a >> b;
    vector<ll> c(n);
    rep(i,n){
        cin >> c.at(i);
        if(a+b==c.at(i)){
            cout << i+1 << endl;
        }
    }
}