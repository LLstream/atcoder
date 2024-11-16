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
    vector<ll> t(n),x(100010),a(100010);
    rep(i,n){
        cin >> t.at(i);
        cin >> x.at(t.at(i)) >> a.at(t.at(i));
    }
    vector<vector<ll>> dp(5,vector<ll>(100010));
    rep1(i,1,5){
        dp.at(i).at(0)=-1e18;
    }
	rep1(t,1,100001){
		rep(i,5){
			dp.at(i).at(t)=dp.at(i).at(t-1);
            if(i!=0){
                dp.at(i).at(t)=max(dp.at(i).at(t),dp.at(i-1).at(t-1));
            }
            if(i!=4){
                dp.at(i).at(t)=max(dp.at(i).at(t),dp.at(i+1).at(t-1));
            }
		}
		dp.at(x.at(t)).at(t)+=a.at(t);
	}
	ll ans=0;
	rep(i,5){
        ans=max(ans,dp.at(i).at(100000));
    }
    cout << ans << endl;
}