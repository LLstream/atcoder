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
    vector<pair<ll,ll>> a(0);
    rep(i,n){
        ll l,r;
        cin >> l >> r;
        a.push_back({l,1});
        a.push_back({r,2});
    }
    sort(a.begin(),a.end());
    ll cnt=0,ans=0;
    rep(i,2*n){
        if(a.at(i).second==1){
            ans+=cnt;
            cnt++;
        }
        if(a.at(i).second==2){
            cnt--;
        }
    }
    cout << ans << endl;
}