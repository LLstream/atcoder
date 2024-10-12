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
    vector<ll> t(n);
    vector<vector<ll>> dp(n+1,vector<ll>(100001));
    rep(i,n)cin >> t.at(i);
    dp.at(0).at(0)=1;
    rep(i,n){
        rep(j,100001){
            dp.at(i+1).at(j)|=dp.at(i).at(j);
            if(j-t.at(i)>=0){
                dp.at(i+1).at(j)|=dp.at(i).at(j-t.at(i));
            }
        }
    }
    ll sum=accumulate(t.begin(),t.end(),0);
    ll ans=LLONG_MAX;
    rep1(i,(sum+1)/2,sum+1){
        if(dp.at(n).at(i)&&i<ans){
            ans=i;
        }
    }
    cout << ans << endl;
}