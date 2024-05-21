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
    ll n,free=0;
    cin >> n;
    vector<ll> a(n);
    vector<ll> cnt(8,0);
    rep(i,n){
        cin >> a.at(i);
        if(a.at(i)>=3200){
            free++;
        }
        else{
            cnt.at(a.at(i)/400)++;
        }
    }
    ll minans=0;
    rep(i,cnt.size()){
        if(cnt.at(i)!=0){
            minans++;
        }
    }
    ll maxans=minans+free;
    if(minans==0){
        minans++;
    }
    cout << minans << " " << maxans << endl;
}