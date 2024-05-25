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
    vector<ll> a(n);
    vector<ll> b(m);
    vector<ll> c(0);
    rep(i,n){
        cin >> a.at(i);
        c.push_back(a.at(i));
    }
    rep(i,m){
        cin >> b.at(i);
        c.push_back(b.at(i));
    }
    sort(c.begin(),c.end());
    sort(a.begin(),a.end());
    vector<ll> d(n);
    rep(i,n+m){
        rep(j,n){
            if(a.at(j)==c.at(i)){
                d.at(j)=i;
                break;
            }
        }
    }
    rep1(i,1,n){
        if(d.at(i)==d.at(i-1)+1){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}