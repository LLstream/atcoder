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
    ll n,w;
    cin >> n >> w;
    vector<vector<pair<ll,ll>>> a(w+1);
    vector<ll> x(n+1),y(n+1);
    rep1(i,1,n+1){
        ll xx,yy;
        cin >> xx >> yy;
        x.at(i)=xx;
        y.at(i)=yy;
        a.at(xx).push_back({yy,i});
    }
    vector<ll> downnum(n+1);
    vector<ll> k(w+1);
    rep1(xx,1,w+1){
        auto &v=a.at(xx);
        sort(v.begin(),v.end(),[](auto &a,auto &b){
            return a.first < b.first;
        });
        k.at(xx)=v.size();
        rep(i,v.size()){
            ll blocknum=v.at(i).second;
            downnum.at(blocknum)=i+1;
        }
    }
    ll l=LLONG_MAX;
    rep1(xx,1,w+1){
        l=min(l,k.at(xx));
    }
    vector<ll> maxy(l+1,0);
    rep1(xx,1,w+1){
        rep(i,a.at(xx).size()){
            ll yy=i+1;
            if(yy<=l){
                maxy.at(yy)=max(maxy.at(yy),a.at(xx).at(i).first);
            }
        }
    }
    vector<ll> time(l+1);
    rep1(i,1,l+1){
        time.at(i)=max(time.at(i-1)+1,maxy.at(i));
    }
    ll INF=LLONG_MAX;
    vector<ll> deletetime(n+1,INF);
    rep1(b,1,n+1){
        ll i=downnum.at(b);
        if(i<=l){
            deletetime.at(b)=time.at(i);
        }
    }
    ll Q;
    cin >> Q;
    while(Q--){
        ll t,a;
        cin >> t >> a;
        if(deletetime.at(a)<=t){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;;
        }
    }
}
