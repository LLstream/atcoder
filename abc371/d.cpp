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
    ll n,q;
    cin >> n;
    vector<ll> x(n+1),p(n+1);
    rep(i,n)cin >> x.at(i+1);
    rep(i,n)cin >> p.at(i+1);
    rep1(i,1,n+1)p.at(i)+=p.at(i-1);
    cin >> q;
    rep(i,q){
        ll l,r;
        cin >> l >> r;
        ll il=lower_bound(x.begin()+1,x.begin()+n+1,l)-x.begin();
        ll ir=upper_bound(x.begin()+1,x.begin()+n+1,r)-x.begin()-1;
        cout << p.at(ir) - p.at(il - 1) << endl;
    }
}