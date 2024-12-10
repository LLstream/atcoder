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
    ll h,w,d;
    cin >> h >> w >> d;
    vector<string> s(h);
    vector<pair<ll,ll>> a(0);
    rep(i,h){
        cin >> s.at(i);
        rep(j,w){
            if(s.at(i).at(j)=='.'){
                a.push_back({i,j});
            }
        }
    }
    ll mx=0;
    rep(i,a.size()){
        rep1(j,i+1,a.size()){
            ll x1=a.at(i).first,y1=a.at(i).second;
            ll x2=a.at(j).first,y2=a.at(j).second;
            set<pair<ll,ll>> b;
            rep1(dx,-d,d+1){
                rep1(dy,-d,d+1){
                    if(abs(dx)+abs(dy)<=d){
                        ll nx=x1+dx,ny=y1+dy;
                        if(0<=nx&&nx<h&&0<=ny&&ny<w&&s.at(nx).at(ny)=='.'){
                            b.emplace(nx,ny);
                        }
                    }
                }
            }
            rep1(dx,-d,d+1){
                rep1(dy,-d,d+1){
                    if(abs(dx)+abs(dy)<=d){
                        ll nx=x2+dx,ny=y2+dy;
                        if(0<=nx&&nx<h&&0<=ny&&ny<w&&s.at(nx).at(ny)=='.'){
                            b.emplace(nx, ny);
                        }
                    }
                }
            }
            mx=max(mx,ll(b.size()));
        }
    }
    cout << mx << endl;
}
