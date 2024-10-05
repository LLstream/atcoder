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
    string s,t;
    cin >> s >> t;
    ll n=min(s.size(),t.size());
    rep(i,n){
        if(s.at(i)!=t.at(i)){
            cout << i+1 << endl;
            return 0;
        }
    }
    if(s.size()!=t.size()){
        cout << n+1 << endl;
        return 0;
    }
    cout << 0 << endl;
}