//解けてないよ

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
    vector<ll> a(n);
    rep(i, n) {
        cin >> a.at(i);
    }

    vector<mint> result(n);

    // 部分列の長さが1と2の場合は直接計算
    result[0] = n;
    result[1] = n * (n - 1) / 2;

    // 部分列の長さが3以上の場合の等差数列をカウント
    rep1(k, 3, n + 1) {
        mint ans = 0;

        // dpテーブル: dp[i][d] -> 数列aのi番目まで見たとき、公差dの長さk-1の部分列の個数
        vector<vector<unordered_map<ll, mint>>> dp(k, vector<unordered_map<ll, mint>>(n));
        
        rep(j, n) {
            rep(i, j) {
                ll diff = a[j] - a[i];
                dp[2][j][diff] += 1;
                for (int len = 3; len <= k; len++) {
                    dp[len - 1][j][diff] += dp[len - 2][i][diff];
                }
            }
        }

        // 長さkの等差数列をカウント
        for (auto& p : dp[k - 1]) {
            for (auto& q : p) {
                ans += q.second;
            }
        }

        result[k - 1] = ans;
    }

    // 結果を出力
    rep(i, n) {
        cout << result[i].val();
        if (i != n - 1) {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}
