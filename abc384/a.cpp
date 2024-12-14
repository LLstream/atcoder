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
    char c1,c2;
    cin >> c1 >> c2;
    string s;
    cin >> s;
    rep(i,n){
        if(s.at(i)!=c1){
            cout << c2;
        }
        else{
            cout << s.at(i);
        }
    }
    cout << endl;
}