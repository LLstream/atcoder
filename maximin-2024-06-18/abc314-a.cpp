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
    string s="3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    ll n;
    cin >> n;
    cout << "3.";
    rep(i,n){
        cout << s.at(i+2);
    }
    cout << endl;
}