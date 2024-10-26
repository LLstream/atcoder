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
    vector<string> s(8);
    rep(i, 8) cin >> s[i];
    vector<ll> x(8,1),y(8,1);
    rep(i,8){
        rep(j,8){
            if(s[i][j]=='#'){
                x[i]=0;
                y[j]=0;
            }
        }
    }
    rep1(i,1,8){
        x[i]+=x[i-1];
        y[i]+=y[i-1];
    }
    cout << x[7]*y[7] << endl;
}