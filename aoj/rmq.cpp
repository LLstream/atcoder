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
    cin >> n >> q;
    ll init=(1ll << 31)-1;
    vector<ll> a(n,init);
    ll k=round(sqrt(n));
    vector<ll> bucket((n+k-1)/k,init);
    while(q--){
        ll com,x,y;
        cin >> com >> x >> y;
        if(com==0){
            a.at(x)=y;
            ll j=x/k;
            ll l=j*k,r=(j+1)*k;
            ll minim=init;
            rep1(i,l,min(r,n)){
                minim=min(minim,a.at(i));
            }
             bucket.at(j)=minim;
        }
        if(com==1){
            y++;
            ll ans=init;
            rep(j,bucket.size()){
                ll l=j*k,r=min((j+1)*k,n);
                if(x<=l&&r<=y){
                    ans=min(ans,bucket.at(j));
                }
                else if(x>=r||y<=l){
                }
                else{
                    rep1(j,max(x,l),min(y,r)){
                        ans=min(ans,a.at(j));
                    }
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}