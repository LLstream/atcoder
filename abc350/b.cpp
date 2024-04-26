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
int main(){
    ll n,q;
    cin >> n >> q;
    vector<ll> t(q);
    vector<ll> a(n,0);
    rep(i,q){
        cin >> t.at(i);
        a.at(t.at(i)-1)++;
        a.at(t.at(i)-1)%=2;
    }
    rep1(i,1,n){
        a.at(i)+=a.at(i-1);
    }
    cout << n-a.at(n-1) << endl;
}