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
    ll nowl=1,nowr=2,ans=0;
    rep(i,q){
        char h;
        ll t;
        cin >> h >> t;
        if(h=='L'){
            if(t==nowl){
                continue;
            }
            else if(nowr<t&&t<nowl){
                ans+=nowl-t;
                nowl=t;
            }
            else if(nowr<nowl&&nowl<t){
                ans+=t-nowl;
                nowl=t;
            }
            else if(t<nowl&&nowl<nowr){
                ans+=nowl-t;
                nowl=t;
            }
            else if(t<nowr&&nowr<nowl){
                ans+=n-nowl+t;
                nowl=t;
            }
            else if(nowl<nowr&&nowr<t){
                ans+=n-t+nowl;
                nowl=t;
            }
            else if(nowl<t&&t<nowr){
                ans+=t-nowl;
                nowl=t;
            }
        }
        else{
            if(t==nowr){
                continue;
            }
            else if(nowl<t&&t<nowr){
                ans+=nowr-t;
                nowr=t;
            }
            else if(nowl<nowr&&nowr<t){
                ans+=t-nowr;
                nowr=t;
            }
            else if(t<nowr&&nowr<nowl){
                ans+=nowr-t;
                nowr=t;
            }
            else if(t<nowl&&nowl<nowr){
                ans+=n-nowr+t;
                nowr=t;
            }
            else if(nowr<nowl&&nowl<t){
                ans+=n-t+nowr;
                nowr=t;
            }
            else if(nowr<t&&t<nowl){
                ans+=t-nowr;
                nowr=t;
            }
        }
    }
    cout << ans << endl;
}