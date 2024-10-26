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
            if(t==nowr){
                ans++;
                if(t!=1&&t!=n){
                    nowr=t+1;
                    
                    nowr=t-1;
                }
                else if(t==1){
                    nowr=n;
                }
                else{
                    nowr=1;
                }
            }
            else if(nowr<t&&t<nowl){
                ans+=min(nowl-t,t-nowr+1+n-nowl+t);
                nowl=t;
                if(ans==t-nowr+1+n-nowl+t){
                    nowr=t+1;
                }
            }
            else if(nowr<nowl&&nowl<t){
                ans+=min(t-nowl,n-t+nowr+1+n-t+nowl+1);
                nowl=t;
                if(ans==n-t+nowr+1+n-t+nowl+1){
                    nowr=t-1;
                }
            }
            else if(t<nowl&&nowl<nowr){
                ans+=min(nowl-t,n-nowr+t+1+n-nowl+t);
                nowl=t;
                if(ans==n-nowr+t+1+n-nowl+t){
                    nowr=t+1;
                }
            }
            else if(t<nowr&&nowr<nowl){
                if(t!=1){
                    ans+=min(n-nowl+t,nowr-t+1+nowl-t);
                    nowl=t;
                    if(ans==nowr-t+1+nowl-t){
                        nowr=t-1;
                    }
                }
                else{
                    ans+=min(n-nowl+t,nowr-t+1+nowl-t+1);
                    nowl=t;
                    if(ans==nowr-t+1+nowl-t+1){
                        nowr=n;
                    }
                }
            }
            else if(nowl<nowr&&nowr<t){
                ans+=min(n-t+nowl,t-nowr+1+t-nowl);
                nowl=t;
                if(ans==t-nowr+1+t-nowl){
                    if(t!=n){
                        nowr=t+1;
                    }
                    else{
                        nowr=1;
                    }
                }
            }
            else if(nowl<t&&t<nowr){
                ans+=min(t-nowl,nowr-t+1+n-t+nowl);
                nowl=t;
                if(ans==nowr-t+1+n-t+nowl){
                    nowr=t-1;
                }
            }
        }
        else{
            if(t==nowr){
                continue;
            }
            else if(nowl<t&&t<nowr){
                ans+=min(nowr-t,t-nowl+1+n-nowr+t);
                nowr=t;
                if(ans==t-nowl+1+n-nowr+t){
                    nowl=t-1;
                }
            }
            else if(nowl<nowr&&nowr<t){
                ans+=min(t-nowr,n-t+nowl+1+n-t+nowr);
                nowr=t;
                if(ans==n-t+nowl+1+n-t+nowr){
                    nowl=t-1;
                }
            }
            else if(t<nowr&&nowr<nowl){
                ans+=min(nowr-t,n-nowl+t+1+n-nowr+t);
                nowr=t;
                if(ans==n-nowl+t+1+n-nowr+t){
                    nowl=t+1;
                }
            }
            else if(t<nowl&&nowl<nowr){
                if(t!=1){
                    ans+=min(n-nowr+t,nowl-t+1+nowr-t);
                    nowr=t;
                    if(ans==nowl-t+1+nowr-t){
                        nowl=t-1;
                    }
                }
                else{
                    ans+=min(n-nowr+t,nowl-t+1+nowr-t);
                    nowr=t;
                    if(ans==nowl-t+1+nowr-t){
                        nowl=n;
                    }
                }
            }
            else if(nowr<nowl&&nowl<t){
                ans+=min(n-t+nowr,t-nowl+1+t-nowr);
                nowr=t;
                if(ans==t-nowl+1+t-nowr){
                    if(t!=n){
                        nowl=t+1;
                    }
                    else{
                        nowl=1;
                    }
                }
            }
            else if(nowr<t&&t<nowl){
                ans+=min(t-nowr,nowl-t+1+n-t+nowr);
                nowr=t;
                if(ans==nowl-t+1+n-t+nowr){
                    nowl=t-1;
                }
            }
        }
        cout << nowl << " " << nowr << " " << ans << endl;
    }
    cout << ans << endl;
}