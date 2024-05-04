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
    vector<ll> a(n),b(n),c(n);
    rep(i,n){
        cin >> a.at(i) >> b.at(i);
        c.at(i)=b.at(i)-a.at(i);
    }
    rep(i,n-1){
        a.at(i+1)+=a.at(i);
    }
    sort(c.begin(),c.end());
    cout << a.at(n-1)+c.at(n-1) << endl;
}