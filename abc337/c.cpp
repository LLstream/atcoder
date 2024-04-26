#include <bits/stdc++.h>
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
using namespace std;
using ll = long long;
using mint = modint998244353;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> aa(n);
    rep(i,n){
        cin >> a.at(i);
        aa.at(i)=a.at(i);
        if(i!=0){
            aa.at(i)+=aa.at(i-1);
        }
    }
    ll m=0;
    rep(i,n){
        m=min(m,aa.at(i));
    }
    cout << aa.at(n-1)-m << endl;
}