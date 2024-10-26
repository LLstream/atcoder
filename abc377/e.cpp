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

ll pow_mod(ll a, ll b, ll mod) {
    ll result = 1;
    a = a % mod;
    while (b > 0) {
        if (b & 1)
            result = result * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return result;
}

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> p(n + 1);
    for (ll i = 1; i <= n; i++) {
        cin >> p[i];
    }
    vector<bool> visited(n + 1, false);
    vector<ll> newp(n + 1);
    for (ll i = 1; i <= n; i++) {
        if (!visited[i]) {
            vector<ll> cycle;
            ll current = i;
            do {
                cycle.push_back(current);
                visited[current] = true;
                current = p[current];
            } while (current != i);
            ll l = cycle.size();
            ll t = pow_mod(2LL, k, l); // 2^k mod l を計算する
            // サイクル内の要素を更新する
            for (ll pos = 0; pos < l; pos++) {
                ll new_pos = (pos + t) % l;
                newp[cycle[pos]] = cycle[new_pos];
            }
        }
    }
    for (ll i = 1; i <= n; i++) {
        cout << newp[i] << (i == n ? '\n' : ' ');
    }
}
