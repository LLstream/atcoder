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
    vector<ll> c(n,0);
    rep(i,m){
        ll a;
        cin >> a;
        char b;
        cin >> b;
        if(c.at(a-1)==0&&b=='M'){
            cout << "Yes" << endl;
            c.at(a-1)++;
        }
        else{
            cout << "No" << endl;
        }
    }
}