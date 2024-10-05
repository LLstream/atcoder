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
double dist(double x1,double y1,double x2,double y2){
    return sqrt((x2 - x1)* (x2 - x1)+ (y2 - y1)* (y2 - y1));
}
int main(){
    ll n;
    double s,t;
    cin >> n >> s >> t;
    vector<tuple<double,double,double,double>> segments(n);
    rep(i,n){
        double a,b,c,d;
        cin >> a >> b >> c >> d;
        segments.at(i)=make_tuple(a,b,c,d);
    }
    vector<ll> perm(n);
    iota(perm.begin(),perm.end(),0);
    double ans=LLONG_MAX;
    do{
        rep(bits,(1<<n)){
            double x=0,y=0;
            double time=0;
            rep(i,n){
                ll idx=perm.at(i);
                auto [a,b,c,d]=segments.at(idx);
                double sx,sy,ex,ey;
                if((bits>>i)&1){
                    sx=c,sy=d,ex=a,ey=b;
                }
                else{
                    sx=a,sy=b,ex=c,ey=d;
                }
                time += dist(x,y,sx,sy)/ s;
                time += dist(sx,sy,ex,ey)/ t;
                x = ex,y = ey;
            }
            ans=min(ans,time);
        }
    }while(next_permutation(perm.begin(),perm.end()));
    cout << fixed << setprecision(20);
    cout << ans << endl;
    return 0;
}
