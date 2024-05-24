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
    vector<vector<ll>> a(3,vector<ll>(3));
    rep(i,3){
        rep(j,3){
            cin >> a.at(i).at(j);
        }
    }
    vector<vector<ll>> c(3,vector<ll>(3,0));
    ll n;
    cin >> n;
    rep(i,n){
        ll b;
        cin >> b;
        rep(j,3){
            rep(k,3){
                if(a.at(j).at(k)==b){
                    c.at(j).at(k)=1;
                }
            }
        }
    }
    rep(i,3){
        ll cnt1=0,cnt2=0;
        rep(j,3){
            cnt1+=c.at(i).at(j);
            cnt2+=c.at(j).at(i);
        }
        if(cnt1==3||cnt2==3){
            cout << "Yes" << endl;
            return 0;
        }
    }
    if(c.at(0).at(0)+c.at(1).at(1)+c.at(2).at(2)==3){
        cout << "Yes" << endl;
        return 0;
    }
    if(c.at(0).at(2)+c.at(1).at(1)+c.at(0).at(2)==3){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
}