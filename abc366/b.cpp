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
    ll n,mx=0;
    cin >> n;
    vector<string> s(n);
    rep(i,n){
        cin >> s.at(i);
        mx=max(mx,ll(s.at(i).size()));
    }
    rep(i,n){
        rep(j,mx-s.at(i).size()+1){
            s.at(i).push_back('*');
        }
    }
    vector<vector<ll>> c(n,vector<ll>(mx,0));
    rep(i,n){
        rep(j,mx){
            if(s.at(i).at(j)!='*'){
                c.at(i).at(j)=1;
            }
        }
    }
    rep(i,n-1){
        rep(j,mx){
            c.at(i+1).at(j)+=c.at(i).at(j);
        }
    }
    // rep(i,n){
    //     rep(j,mx){
    //         cout << s.at(i).at(j);
    //     }
    //     cout << endl;
    // }
    rep(i,mx){
        rep(j,n){
            if(c.at(n-1-j).at(i))cout << s.at(n-1-j).at(i);
        }
        cout << endl;
    }
}