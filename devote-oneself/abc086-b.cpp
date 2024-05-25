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
    ll a,b,c;
    cin >> a >> b;
    c=b;
    a*=10;
    while(1){
        if(c/10==0){
            break;
        }
        else{
            c/=10;
            a*=10;
        }
    }
    a+=b;
    rep(i,400){
        if(i*i==a){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}