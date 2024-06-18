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
        ll n,m;
        cin >> n >> m;
        if(n==0&&m==0){
            break;
        }
        vector<vector<ll>> p(m,vector<ll>(n));
        rep(i,m){
            rep(j,n){
                cin >> p.at(i).at(j);
            }
        }
        rep(i,n){
            rep1(j,1,m){
                p.at(j).at(i)+=p.at(j-1).at(i);
            }
        }
        ll max=0;
        rep(i,n){
            if(p.at(m-1).at(i)>max){
                max=p.at(m-1).at(i);
            }
        }
        cout << max << endl;
    }
}