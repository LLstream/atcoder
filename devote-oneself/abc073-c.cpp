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
    cin >>n;
    set<ll> s;
    rep(i,n){
        ll a;
        cin >> a;
        if(s.count(a)==0){
            s.insert(a);
            continue;
        }
        else{
            s.erase(a);
        }
    }
    cout << s.size() << endl;
}