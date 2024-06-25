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
    set<string> set;
    rep(i,n){
        string s;
        cin >> s;
        set.insert(s);
    }
    if(set.size()==3){
        cout << "Three" << endl;
        return 0;
    }
    cout << "Four" << endl;
}