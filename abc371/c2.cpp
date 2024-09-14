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
    ll mg;
    cin >> mg;
    vector<vector<ll>> g(n+1,vector<ll>(n+1));
    rep(i,mg){
        ll ui,vi;
        cin >> ui >> vi;
        g.at(ui).at(vi)=g.at(vi).at(ui)=1;
    }
    ll mh;
    cin >> mh;
    vector<vector<ll>> h(n+1,vector<ll>(n+1));
    rep(i,mh){
        ll ai,bi;
        cin >> ai >> bi;
        h.at(ai).at(bi)=h.at(bi).at(ai)=1;
    }
    vector<vector<ll>> a(n+1,vector<ll>(n+1));
    rep1(i,1,n){
        rep1(j,i+1,n+1){
            ll aij;
            cin >> aij;
            a.at(i).at(j)=aij;
        }
    }
    vector<ll> p(n);
    rep(i,n){
        p.at(i)=i+1;
    }
    ll ans=LLONG_MAX;
    do{
        ll cost=0;
        rep1(i,1,n){
            rep1(j,i+1,n+1){
                ll gg=g.at(i).at(j);
                ll hh=h.at(p.at(i-1)).at(p.at(j-1));
                if(gg!=hh) {
                    ll u=min(p.at(i-1),p.at(j-1));
                    ll v=max(p.at(i-1),p.at(j-1));
                    cost+=a.at(u).at(v);
                }
            }
        }
        ans=min(ans,cost);
    }while(next_permutation(p.begin(),p.end()));
    cout << ans << endl;
}
