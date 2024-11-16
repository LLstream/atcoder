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
    vector<ll> q(n),r(n);
    rep(i,n){
        cin >> q.at(i) >> r.at(i);
    }
    ll Q;
    cin >> Q;
    rep(i,Q){
        ll t,d;
        cin >> t >> d;
        t--;
        if(d<r.at(t)){
            cout << r.at(t) << endl;
        }
        else if((d-r.at(t))%q.at(t)==0){
            cout << d << endl;
        }
        else{
            cout << ((d-r.at(t))/q.at(t)+1)*q.at(t)+r.at(t) << endl;
        }
    }
}