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
    // ボンバーマン
    ll h,w,q;
    cin >> h >> w >> q;
    vector<vector<ll>> s(h,vector<ll>(w,1));
    vector<vector<tuple<ll,ll,ll,ll>>> a(h,vector<tuple<ll,ll,ll,ll>>(w));
    rep(i,h){
        rep(j,w){
            a.at(i).at(j)={i,i,j,j};
        }
    }
    ll ans=h*w;
    rep(i,q){
        ll r,c;
        cin >> r >> c;
        r--;
        c--;
        if(s.at(r).at(c)==1){
            s.at(r).at(c)--;
            ans--;
            if(r!=0){
                get<0>(a.at(r).at(c))=get<0>(a.at(r-1).at(c));
            }
            else{
                get<0>(a.at(r).at(c))=-1;
            }
            if(r!=h-1){
                get<1>(a.at(r).at(c))=get<1>(a.at(r+1).at(c));
            }
            else{
                get<1>(a.at(r).at(c))=h;
            }
            if(c!=0){
                get<2>(a.at(r).at(c))=get<2>(a.at(r).at(c-1));
            }
            else{
                get<2>(a.at(r).at(c))=-1;
            }
            if(c!=w-1){
                get<3>(a.at(r).at(c))=get<3>(a.at(r).at(c+1));
            }
            else{
                get<3>(a.at(r).at(c))=w;
            }
        }
        else{
            ll l1=get<0>(a.at(r).at(c)),r1=get<1>(a.at(r).at(c)),u1=get<2>(a.at(r).at(c)),d1=get<3>(a.at(r).at(c));
            ll t=l1;
            if(t!=0){
                get<0>(a.at(t).at(c))=get<0>(a.at(t-1).at(c));
                if(get<0>(a.at(t).at(c))!=-1){
                    ans--;
                    s.at(get<0>(a.at(t).at(c))).at(c)--;
                }
            }
            else{
                get<0>(a.at(t).at(c))=-1;
            }
            if(t!=h-1){
                get<0>(a.at(t+1).at(c))=get<0>(a.at(t).at(c));
            }
            t=r1;
            if(t!=h-1){
                get<1>(a.at(t).at(c))=get<1>(a.at(t+1).at(c));
                if(get<1>(a.at(t).at(c))!=h){
                    ans--;
                    s.at(get<1>(a.at(t).at(c))).at(c)--;
                }
            }
            else{
                get<1>(a.at(t).at(c))=h;
            }
            if(t!=0){
                get<1>(a.at(t-1).at(c))=get<1>(a.at(t).at(c));
            }
            t=u1;
            if(t!=0){
                get<2>(a.at(r).at(t))=get<2>(a.at(r).at(t-1));
                if(get<2>(a.at(r).at(t))!=0){
                    ans--;
                    s.at(r).at(get<2>(a.at(r).at(t)))--;
                }
            }
            else{
                get<2>(a.at(r).at(t))=-1;
            }
            if(t!=w-1){
                get<3>(a.at(r).at(t+1))=get<0>(a.at(r).at(t));
            }
            t=d1;
            if(t!=w-1){
                get<3>(a.at(r).at(t))=get<3>(a.at(r).at(t+1));
                if(get<3>(a.at(r).at(t))!=w){
                    ans--;
                    s.at(r).at(get<3>(a.at(r).at(t)))--;
                }
            }
            else{
                get<3>(a.at(r).at(t))=w;
            }
            if(t!=0){
                get<3>(a.at(r).at(t-1))=get<0>(a.at(r).at(t));
            }
        }
    }
    cout << ans << endl;
}