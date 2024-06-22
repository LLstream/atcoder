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
    // 誤読してんじゃねぇよカス
    ll n;
    cin >> n;
    vector<ll> h(n);
    vector<ll> a(n+1);
    rep(i,n){
        cin >> h.at(i);
    }
    ll ans=0;
    vector<ll> answer(0);
    rep(i,n){
        ans+=h.at(i)*(i+1);
        answer.push_back(ans);
    }
    reverse(answer.begin(),answer.end());
    rep(i,answer.size()){
        cout << answer.at(i) << endl;
    }
}