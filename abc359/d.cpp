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
    // わっかんね
    ll k,n;
    cin >> k >> n;
    string s;
    cin >> s;
    vector<ll> q(0);
    rep(i,n){
        if(s.at(i)=='?'){
            q.push_back(i);
        }
    }
    if(k%2==0){
        ll k1=k/2;
        rep(i,n-k){
            rep(j,k/2){
                
            }
        }
    }
    else{

    }
}