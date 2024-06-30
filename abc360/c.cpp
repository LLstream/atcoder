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
    vector<pair<ll,ll>> b(n);
    vector<ll> a(n),w(n);
    rep(i,n){
        cin >> a.at(i);
    }
    rep(i,n){
        cin >> w.at(i);
    }
    rep(i,n){
        b.at(i)={a.at(i),-w.at(i)};
    }
    sort(b.begin(),b.end());
    ll cost=0;
    rep1(i,1,n){
        if(b.at(i).first==b.at(i-1).first){
            cost-=b.at(i).second;
        }
    }
    cout << cost << endl;
}