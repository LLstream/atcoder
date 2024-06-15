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
    ll n,m;
    cin >> n >> m;
    vector<ll> a(n),b(m);
    rep(i,n){
        cin >> a.at(i);
    }
    rep(i,m){
        cin >> b.at(i);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll now=0,money=0;
    rep(i,m){
        while(1){
            if(now==n){
                cout << -1 << endl;
                return 0;
            }
            if(a.at(now)>=b.at(i)){
                money+=a.at(now);
                now++;
                break;
            }
            now++;
        }
    }
    cout << money << endl;
}