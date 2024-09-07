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
    ll l,r;
    cin >> l >> r;
    if(l+r==2||l+r==0){
        cout << "Invalid" << endl;
    }
    else if(l==1){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}