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
    vector<vector<ll>> a(n,vector<ll>(n));
    rep(i,n){
        rep(j,i+1){
            cin >> a.at(i).at(j);
        }
    }
    ll now=1;
    rep(i,n){
        if(now<i+1){
            now=a.at(i).at(now-1);
        }
        else{
            now=a.at(now-1).at(i);
        }
    }
    cout << now << endl;
}