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
ll op(ll a,ll b){
    return a+b;
}
ll e(){
    return 0LL;
}
int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n){
        cin >> a.at(i);
    }
    vector<ll> s(n);
    ll mx=2000000;
    segtree<ll,op,e> seg(mx+1);
    s.at(0)=a.at(0);
    seg.set(s.at(0),seg.get(s.at(0))+1);
    rep1(i,1,n){
        s.at(i)=a.at(i)+seg.prod(i,mx+1);
        seg.set(s.at(i)+i,seg.get(s.at(i)+i)+1);
    }
    rep(i,n){
        cout << max(0LL,s.at(i)-n+1+i);
        if(i==n-1){
            cout << endl;
        }
        else{
            cout << " ";
        }
    }
}
