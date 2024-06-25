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
    vector<string> s(n);
    map<string,ll> mp;
    rep(i,n){
        cin >> s.at(i);
        mp[s.at(i)]=0;
    }
    rep(i,n){
        mp[s.at(i)]++;
    }
    ll ans=0,number;
    rep(i,n){
        if(mp[s.at(i)]>ans){
            ans=mp[s.at(i)];
            number=i;
        }
    }
    cout << s.at(number) << endl;
}