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
    ll t=0;
    string s;
    cin >> s;
    rep(i,n){
        if(s.at(i)=='T'){
            t++;
        }
    }
    if(t<n-t){
        cout << 'A' << endl;
    }
    else if(t>n-t){
        cout << 'T' << endl;
    }
    else{
        if(s.at(n-1)=='A'){
            cout << 'T' << endl;
        }
        else{
            cout << 'A' << endl;
        }
    }
}