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
    rep1(i,1,50001){
        if(i*108/100==n){
            cout << i << endl;
            return 0;
        }
    }
    cout << ":(" << endl;
}