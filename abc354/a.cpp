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
    ll h;
    cin >> h;
    ll i=0,n=0,w=1;
    while(true){
        i++;
        n+=w;
        w*=2;
        if(h<n){
            cout << i+1 << endl;
            return 0;
        }
    }
}