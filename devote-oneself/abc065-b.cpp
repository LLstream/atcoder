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
    ll n,now=0;
    cin >> n;
    vector<ll> a(n);
    rep(i,n){
        cin >> a.at(i);
    }
    ll cnt=0;
    while(true){
        now=a.at(now)-1;
        cnt++;
        if(now==1){
            cout << cnt << endl;
            break;
        }
        if(cnt>n){
            cout << -1 << endl;
            break;
        }
    }
}