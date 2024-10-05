#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n), p(n), b(n), q(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a.at(i) >> p.at(i) >> b.at(i) >> q.at(i);
    }
    ll low = 0, high = 1e12; // 製造能力の範囲
    while (low + 1 < high) {
        ll w = (low + high) / 2; // 試す製造能力
        ll total_cost = 0;
        bool possible = true;
        for (ll i = 0; i < n; ++i) {
            ll min_cost = numeric_limits<ll>::max();
            // 機械s_iのみを導入する場合
            ll k_s = (w + a.at(i) - 1) / a.at(i);
            ll cost_s = k_s * p.at(i);
            // 機械t_iのみを導入する場合
            ll k_t = (w + b.at(i) - 1) / b.at(i);
            ll cost_t = k_t * q.at(i);
            // 機械s_iとt_iを組み合わせる場合
            // k_sの範囲を限定（計算量を抑えるため）
            ll max_k_s = min(k_s, 100000ll); // 適切な上限を設定
            for (ll ks = 0; ks <= max_k_s; ++ks) {
                ll remaining = max(0ll, w - ks * a.at(i));
                ll kt = (remaining + b.at(i) - 1) / b.at(i);
                ll cost = ks * p.at(i) + kt * q.at(i);
                if (cost < min_cost) {
                    min_cost = cost;
                }
            }
            // 単独の場合も考慮
            min_cost = min({min_cost, cost_s, cost_t});
            total_cost += min_cost;
            if (total_cost > x) {
                possible = false;
                break;
            }
        }
        if (possible) {
            low = w;
        }
        else {
            high = w;
        }
    }
    cout << low << endl;
    return 0;
}
