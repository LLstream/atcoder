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
    ll n,k,sum=0,plus=0,minus=0;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i,n){
        cin >> a.at(i);
        sum+=a.at(i);
        if(a.at(i)>=0){
            plus+=a.at(i);
        }
        else{
            minus+=a.at(i);
        }
    }
    if(k<=0&&sum<k){
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    if(sum>=0){
        sort(a.begin(),a.end());
        if(k<=0){
            reverse(a.begin(),a.end());
        }
    }
    else{
        sort(a.begin(),a.end());
        if(k<=sum){
            reverse(a.begin(),a.end());
        }
    }
    rep(i,n){
        cout << a.at(i);
        if(i!=n-1){
            cout << " ";
        }
        else{
            cout << endl;
        }
    }
}