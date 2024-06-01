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
    ll n,l,r;
    cin >> n >> l >> r;
    vector<ll> a(n);
    a.at(0)=1;
    rep1(i,1,n){
        a.at(i)=a.at(i-1)+1;
    }
    // rep(i,l-1){
    //     cout << a.at(i);
    //     if(l!=n){
    //         cout << " ";
    //     }
    // }
    // vector<ll> b(r-l);
    // rep1(i,l-1,r-1){
    //     cout << 
    // }
    rep(i,n){
        if(i<l-1){
            cout << i+1;
        }
        else if(i<r){
            cout << r+l-i-1;
        }
        else{
            cout << i+1;
        }
        if(i!=n-1){
            cout << " ";
        }
        else{
            cout << endl;
        }
    }
    // reverse(a.begin()+l-1,a.begin()+r-1);
    // rep(i,n){
    //     cout << a.at(i);
    //     if(i!=n-1){
    //         cout << " ";
    //     }
    //     else{
    //         cout << endl;
    //     }
    // }
}