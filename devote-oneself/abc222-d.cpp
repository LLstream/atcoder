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
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        rep(i, n) cin >> a[i];
        rep(i, n) cin >> b[i];

        vector<vector<mint>> dp(n + 1, vector<mint>(3001, 0));
        dp[0][0] = 1;

        rep(i, n) {
                vector<mint> cum(3001, 0);
                rep(j, 3001) {
                        cum[j] = dp[i][j];
                        if (j > 0) cum[j] += cum[j - 1];
                }
                rep1(j, a[i], b[i] + 1) {
                        dp[i + 1][j] = cum[j];
                }
        }

        mint result = 0;
        rep(j, 3001) {
                result += dp[n][j];
        }

        cout << result.val() << endl;
        return 0;
}