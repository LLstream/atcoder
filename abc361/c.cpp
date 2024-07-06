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
    ll n,k;
    cin >> n >> k;
    if(n==k+1){
        cout << 0 << endl;
        return 0;
    }
    deque<ll> a(n);
    rep(i,n){
        cin >> a.at(i);
    }
    sort(a.begin(),a.end());
    ll mn=100000000000000000000000000000;
    rep(i,k+1){
        mn=min(mn,a.at(i+n-k-1)-a.at(i));
    }
    cout << mn << endl;
    // rep(i,k){
    //     if(a.at(1)-a.at(0)<=a.at(a.size()-1)-a.at(a.size()-2)){
    //         a.pop_back();
    //     }
    //     else if(a.at(1)-a.at(0)>a.at(a.size()-1)-a.at(a.size()-2)){
    //         a.pop_front();
    //     }
    // }
    // cout << a.back()-a.front() << endl;
}