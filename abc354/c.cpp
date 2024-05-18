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
    vector<ll> a(n),c(n);
    vector<pair<ll,ll>> b(n);
    rep(i,n){
        cin >> a.at(i) >> c.at(i);
        b.at(i).first=a.at(i);
        b.at(i).second=-c.at(i);
    }
    sort(b.rbegin(),b.rend());

    ll ans=1,maxc=b.at(0).second,maxa=b.at(0).first,tc=b.at(0).second,ta=b.at(0).first;
    rep1(i,1,n){
        if(a.at(i)!=a.at(i+1)){
            maxc=tc;
            maxa=ta;
        }
        if(b.at(i).first>maxa||b.at(i).second>maxc){
            ans++;
            if(tc<b.at(i).second){
                tc=b.at(i).second;
                ta=b.at(i).first;
            }
        }
    }
    cout << ans << endl;
    //下手くそ
}