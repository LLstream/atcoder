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
    double n;
    ll a,b=n;
    cin >> n;
    a=n/1.08;
    ll min=a,max=a+1;
    // cout << min << endl;
    // cout << max*1.08 << endl;
    if(min*1.08==n){
        cout << min << endl;
    }
    else if(max*1.08==n){
        cout << max << endl;
    }
    else{
        cout << ":(" << endl;
    }
}