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
    vector<ll> a(n);
    rep(i,n){
        cin >> a.at(i);
    }
    if(n==2){
        cout << "Yes" << endl;
        return 0;
    }
    rep1(i,2,n){
        if(a.at(i)*a.at(0)!=a.at(i-1)*a.at(1)){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}