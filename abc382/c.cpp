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
    ll n,m;
    cin >> n >> m;
    vector<ll> a(n),b(m);
    rep(i,n){
        cin >> a.at(i);
    }
    rep(i,m){
        cin >> b.at(i);
    }
    vector<pair<ll,ll>> c(1,{a.at(0),1});
    rep(i,n-1){
        if(a.at(i+1)<c.at(i).first){
            c.push_back({a.at(i+1),i+2});
        }
        else{
            c.push_back(c.at(i));
        }
    }
    vector<pair<ll,ll>> d(1,{c.at(0).first,c.at(0).second});
    rep(i,n-1){
        if(c.at(i).first!=c.at(i+1).first){
            d.push_back({c.at(i+1).first,c.at(i+1).second});
        }
    }
    vector<ll> ans(m,-1);
    rep(i,m){
        if(b.at(i)<d.at(d.size()-1).first){
            ans.at(i)=-1;
        }
        else if(b.at(i)>=d.at(0).first){
            ans.at(i)=d.at(0).second;
        }
        else{
            ll left=0,right=c.size();
            while(left<right){
                ll mid=(left+right)/2;
                if(c.at(mid).first<=b.at(i)){
                    right=mid;
                }
                else{
                    left=mid+1;
                }
            }
            ans.at(i)=c.at(left).second;
        }
    }
    rep(i,m){
        cout << ans.at(i) << endl;
    }
}