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
    ll l=0,r=1;
    ll ans=0;
    while(1){
        if(a.at(r)>=a.at(l)*2){
            ans+=n-r;
            l++;
        }
        else{
            r++;
        }
        if(r==n){
            l++;
            r--;
        }
        if(l==n-1){
            break;
        }
    }
    cout << ans << endl;
}