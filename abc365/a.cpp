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
    ll y;
    cin >> y;
    if(y%400==0){
        cout << 366 << endl;
    }
    else if(y%100==0){
        cout << 365 << endl;
    }
    else if(y%4==0){
        cout << 366 << endl;
    }
    else {
        cout << 365 << endl;
    }
}