#include <bits/stdc++.h>
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
using namespace std;
using ll = long long;
using mint = modint998244353;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
int main() {
    ll t;
    cin >> t;
    rep(i,t){
        ll n,a,b;
        cin >> n >> a >> b;
        if(n<a){
            cout << "No" << endl;
        }
        else if(n/2<=a){
            if((n-a)*(n-a)>=b){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
        else{
            if((n-n/2)*(n-n/2+n/2-a)>=b){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }
}