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
    vector<ll> a(n);
    rep(i,n){
        cin >> a.at(i);
    }
    rep(i,n-1){
        if(abs(a.at(i)-a.at(i+1))==1){
            cout << a.at(i) << " ";
        }
        else{
            if(a.at(i)<a.at(i+1)){
                rep1(j,a.at(i),a.at(i+1)){
                    cout << j << " ";
                    
                }
            }
            else{
                for(int j=a.at(i);j>a.at(i+1);j--){
                    cout << j << " ";
                }
            }
        }
    }
    cout << a.at(n-1) << endl;
}