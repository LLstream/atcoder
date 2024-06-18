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
    while(1){
        ll n,m;
        cin >> n >> m;
        if(n==0&&m==0){
            break;
        }
        vector<ll> a(n);
        rep(i,n){
            cin >> a.at(i);
        }
        vector<ll> w(m);
        rep(i,m){
            cin >> w.at(i);
        }
        vector<ll> num(0);
            vector<vector<ll>> x(m,vector<ll>(59049));
        x.at(0).push_back(0);
        x.at(0).push_back(a.at(0));
        x.at(0).push_back(-a.at(0));
    }
}