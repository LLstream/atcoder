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
    ll n,k,x;
    cin >> n >> k >> x;
    vector<ll> a(n);
    rep(i,n){
        if(i==k){
            cout << x << " ";
        }
        cin >> a.at(i);
        cout << a.at(i);
        if(i!=n-1){
            cout << " ";
        }
    }
    if(n==k){
        cout << " " << x;
    }
    cout << endl;
}