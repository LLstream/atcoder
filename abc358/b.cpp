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
    ll n,a;
    cin >> n >> a;
    vector<ll> t(n);
    rep(i,n){
        cin >> t.at(i);
    }
    cout << t.at(0)+a << endl;
    ll time=t.at(0)+a,waitpeople=0;
    rep1(i,1,n){
        waitpeople++;
        if(time+a*waitpeople<=t.at(i)+a){
            cout << t.at(i)+a << endl;
            time=t.at(i)+a;
            waitpeople=0;
        }
        else{
            cout << time+a*waitpeople << endl;
        }
    }
}