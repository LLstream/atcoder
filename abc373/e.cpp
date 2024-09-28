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
    ll n,m,k,now=0;
    cin >> n >> m >> k;
    vector<ll> ans(n);
    vector<pair<ll,ll>> a(n);
    rep(i,n){
        ll aa;
        cin >> aa;
        now+=aa;
        a.at(i)={aa,i};
    }
    sort(a.begin(),a.end());
    map<ll,ll> mp;
    rep(i,n){
        ll c=0,ans=0;
        rep1(j,i+1,m){
            c+=a.at(i).first-a.at(j).first;
        }
        if(k-now<=c){
            mp[a.at(i).second]=ans;
        }
        else{
            ll b=k-now-c;
            
        }
    }
}