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
    vector<ll>t(n),v(n);
    rep(i,n){
        cin >> t.at(i) >> v.at(i);
    }
    vector<ll> a(101);
    rep(i,n){
        a.at(t.at(i))=v.at(i);
    }
    rep(i,100){
        a.at(i+1)=max(a.at(i)-1,ll(0))+a.at(i+1);
    }
    cout << a.at(t.at(t.size()-1)) << endl;
}
