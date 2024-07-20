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
    ll n,t,p;
    cin >> n >> t >> p;
    vector<ll> l(n);
    rep(i,n){
        cin >> l.at(i);
    }
    sort(l.rbegin(),l.rend());
    if(l.at(p-1)>=t){
        cout << 0 << endl;
    }
    else{
        cout << t-l.at(p-1) << endl;
    }
}