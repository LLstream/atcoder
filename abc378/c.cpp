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
    vector<ll> a(n),b(n);
    rep(i,n){
        cin >> a.at(i);
    }
    set<ll> s;
    map<ll,ll> mp;
    rep(i,n){
        if(!s.count(a.at(i))){
            s.insert(a.at(i));
            mp[a.at(i)]=i;
            b.at(i)=-1;
        }
        else{
            b.at(i)=mp[a.at(i)]+1;
            mp[a.at(i)]=i;
        }
    }
    rep(i,n){
        cout << b.at(i) << endl;
    }
}