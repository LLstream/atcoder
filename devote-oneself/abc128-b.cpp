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
    vector<tuple<string,ll,ll>> p(n);
    rep(i,n){
        string s;
        ll a;
        cin >> s >> a;
        p.at(i)={s,a,i+1};
    }
    sort(p.begin(), p.end(), [](tuple<string, int, int> a, tuple<string, int, int> b) {
        if (get<0>(a) == get<0>(b)) {
            return get<1>(a) > get<1>(b);
        }
        else {
            return get<0>(a) < get<0>(b);
        }
    });
    rep(i,n){
        cout << get<2>(p.at(i)) << endl;
    }
}