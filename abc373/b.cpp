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
    vector<pair<char,ll>> s(26);
    rep(i,26){
        char c;
        cin >> c;
        s.at(i)={c,i};
    }
    sort(s.begin(),s.end());
    ll ans=0;
    rep1(i,1,26){
        ans+=abs(s.at(i).second-s.at(i-1).second);
    }
    cout << ans << endl;
}