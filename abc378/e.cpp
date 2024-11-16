#include <bits/stdc++.h>
#if __has_include(<atcoder/convolution>)
  #include <atcoder/convolution>
  using namespace atcoder;
#endif
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)

int main() {
    ll n,m;
    cin >> n >> m;
    vector<ll> a(n);
    rep(i,n){
        cin >> a.at(i);
        a.at(i)%=m;
    }
    vector<ll> prefix(n+1, 0);
    rep(i, n) {
        prefix[i+1] = (prefix[i] + a[i]) % m;
    }

    vector<ll> freq(m, 0);
    for(auto s : prefix) {
        freq[s]++;
    }

    ll ans = 0;
    rep(k, m) {
        ans += freq[k] * (freq[k] - 1) / 2 * k;
    }

    cout << ans << endl;
    return 0;
}
