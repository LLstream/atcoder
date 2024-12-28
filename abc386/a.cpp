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
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    ll num=1;
    if(a!=b){
        num++;
    }
    if(a!=c&&b!=c){
        num++;
    }
    if(a!=d&&b!=d&&c!=d){
        num++;
    }
    if(num==2){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}