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
    vector<vector<vector<ll>>> a(n, vector<vector<ll>>(n, vector<ll>(n)));
    rep(i,n){
        rep(j,n){
            rep(k,n){
                cin >> a.at(i).at(j).at(k);
            }
        }
    }
    rep(i,n-1){
        rep(j,n){
            rep(k,n){
                a.at(i+1).at(j).at(k)+=a.at(i).at(j).at(k);
            }
        }
    }
    rep(i,n-1){
        rep(j,n){
            rep(k,n){
                a.at(j).at(i+1).at(k)+=a.at(j).at(i).at(k);
            }
        }
    }
    rep(i,n-1){
        rep(j,n){
            rep(k,n){
                a.at(j).at(k).at(i+1)+=a.at(j).at(k).at(i);
            }
        }
    }
    ll q;
    cin >> q;
    rep(i,q){
        ll lx,rx,ly,ry,lz,rz;
        cin >> lx >> rx >> ly >> ry >> lz >> rz;
        lx--;
        rx--;
        ly--;
        ry--;
        lz--;
        rz--;
        ll ans=a.at(rx).at(ry).at(rz);
        if(lx){
            ans-=a.at(lx-1).at(ry).at(rz);
        }
        if(ly){
            ans-=a.at(rx).at(ly-1).at(rz);
        }
        if(lz){
            ans-=a.at(rx).at(ry).at(lz-1);
        }
        if(lx&&ly){
            ans+=a.at(lx-1).at(ly-1).at(rz);
        }
        if(ly&&lz){
            ans+=a.at(rx).at(ly-1).at(lz-1);
        }
        if(lz&&lx){
            ans+=a.at(lx-1).at(ry).at(lz-1);
        }
        if(lx&&ly){
            if(lz){
                ans-=a.at(lx-1).at(ly-1).at(lz-1);
            }
        }
        cout << ans << endl;
    }
}