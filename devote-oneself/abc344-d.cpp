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
    string t;
    cin >> t;
    ll n,tl=t.size();
    cin >> n;
    vector<vector<ll>> dp(105,vector<ll>(105));
    rep(i,105){
        rep(j,105){
            dp.at(i).at(j)=1e9;
        }
    }
    dp.at(0).at(0)=0;
    rep(i,n){
        rep(j,105){
            dp.at(i+1).at(j)=dp.at(i).at(j);
        }
        ll m;
        cin >> m;
        while(m>0){
            m--;
            string s;
            cin >> s;
            ll sl=s.size();
            rep(j,tl-sl+1){
                bool ok=true;
                rep(k,sl){
                    if(t.at(j+k)!=s.at(k)){
                        ok=false;
                        break;
                    }
                }
                if(ok){
                    dp.at(i+1).at(j+sl)=min(dp.at(i+1).at(j+sl),dp.at(i).at(j)+1);
                }
            }
        }
    }
    if(dp.at(n).at(tl)>5e8){
        cout << -1 << endl;
    }
    else{
        cout << dp.at(n).at(tl) << endl;
    }
}
