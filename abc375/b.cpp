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
    double ans=0;
    cin >> n;
    vector<ll> x(n+1),y(n+1);
    rep(i,n){
        cin >> x.at(i+1) >> y.at(i+1);
    }
    rep(i,n){
        ans+=sqrt(pow(x.at(i+1)-x.at(i),2)+pow(y.at(i+1)-y.at(i),2));
    }
    ans+=sqrt(pow(x.at(n)-x.at(0),2)+pow(y.at(n)-y.at(0),2));
    cout << fixed << setprecision(10) << ans << endl;
}