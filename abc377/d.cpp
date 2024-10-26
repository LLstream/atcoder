#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); ++i)

int main() {
    ll N, M;
    cin >> N >> M;
    vector<ll> L(N), R(N);
    rep(i, N) cin >> L[i] >> R[i];

    vector<vector<ll>> adj(M + 2);
    rep(i, N) {
        adj[L[i]].push_back(R[i]);
    }

    vector<ll> min_R(M + 2, M + 1);
    for (ll l = M; l >= 1; --l) {
        min_R[l] = min_R[l + 1];
        for (ll r : adj[l]) {
            min_R[l] = min(min_R[l], r);
        }
    }

    ll total_intervals = M * (M + 1) / 2;
    ll invalid_intervals = 0;
    for (ll l = 1; l <= M; ++l) {
        if (min_R[l] <= M) {
            invalid_intervals += (M - min_R[l] + 1);
        }
    }

    ll answer = total_intervals - invalid_intervals;
    cout << answer << endl;
    return 0;
}
