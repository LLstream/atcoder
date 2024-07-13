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
    vector<ll> l(n),r(n),ans(n);
    ll suml=0,sumr=0;
    rep(i,n){
        cin >> l.at(i) >> r.at(i);
        suml+=l.at(i);
        sumr+=r.at(i);
        ans.at(i)=l.at(i);
    }
    if(suml>0||sumr<0){
        cout << "No" << endl;
        return 0;
    }
    rep(i,n){
        if(suml==0){
            break;
        }
        suml+=r.at(i)-l.at(i);
        ans.at(i)+=r.at(i)-l.at(i);
        if(suml>0){
            ans.at(i)-=suml;
            break;
        }
    }
    cout << "Yes" << endl;
    rep(i,n){
        cout << ans.at(i);
        if(i!=n-1){
            cout << " ";
        }
    }
    cout << endl;
}