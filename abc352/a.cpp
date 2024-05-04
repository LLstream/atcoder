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
    ll n,x,y,z;
    cin >> n >> x >> y >> z;
    if(x<y){
        if(x<z&&z<y){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    else{
        if(y<z&&z<x){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}