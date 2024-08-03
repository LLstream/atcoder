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
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    rep(i,n){
        cin >> a.at(i);
    }
    ll l=0,h=*max_element(a.begin(),a.end())+1;
    while(l<h){
        ll mid=(l+h)/2;
        ll total=0;
        rep(i,n){
            total+=min(mid,a.at(i));
        }
        if(total<=m) {
            l=mid+1;
        } else {
            h=mid;
        }
    }
    if(l>*max_element(a.begin(),a.end())){
        cout << "infinite" << endl;
    }
    else{
        cout << l-1 << endl;
    }
}
