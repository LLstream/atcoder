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
    while(1){
        ll d,w;
        cin >> d >> w;
        if(d==0&&w==0){
            return 0;
        }
        vector<vector<ll>> e(d,vector<ll>(w));
        ll mx=0;
        rep(i,d){
            rep(j,w){
                cin >> e.at(i).at(j);
                mx=max(mx,e.at(i).at(j));
            }
        }
        rep1(i,1,d-1){
            rep1(j,1,w-1){
                
            }
        }
    }
}