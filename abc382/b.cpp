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
    ll n,d;
    cin >> n >> d;
    string s;
    cin >> s;
    ll ans=0;
    rep(i,d){
        rep(i,n){
            if(s.at(n-1-i)=='@'){
                s.at(n-1-i)='.';
                break;
            }
        }
    }
    rep(i,n){
        cout << s.at(i);
    }
    cout << endl;
}