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
    vector<ll> p(n);
    vector<ll> a(n);//どの数字が何番目にいるか管理する配列
    rep(i,n){
        cin >> p.at(i);
        a.at(p.at(i)-1)=i;
    }
    ll miin=k+1;
    rep(i,n-k){
        ll mi=n+1,ma=0;
        rep1(j,i,i+k){
            mi=min(mi,a.at(j));
            ma=max(ma,a.at(j));
        }
        miin=min(miin,ma-mi);
    }
    cout << miin << endl;
    //　悔しい
}