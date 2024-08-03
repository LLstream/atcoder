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
    ll n,m;
    cin >> n >> m;
    vector<ll> a(n);
    rep(i,n){
        cin >> a.at(i);
    }
    sort(a.begin(),a.end());
    if(n==1){
        if(a.at(0)<=m){
            cout << "infinite" << endl;
        }
        else {
            cout << m << endl;
        }
        return 0;
    }
    if(n>m){
        cout << 0 << endl;
        return 0;
    }
    ll nowm=0,check=n;
    rep(i,n){
        if(i==0){
            if(n*a.at(i)>m){
                cout << m/n << endl;
                return 0;
            }
            nowm+=n*a.at(i);
        }
        else{
            if(a.at(i)==a.at(i-1)) continue;
            if(nowm+(n-i)*(a.at(i)-a.at(i-1))>m){
                check=i-1;
                break;
            }
            nowm+=(n-i)*(a.at(i)-a.at(i-1));
        }
    }
    if(check==n){
        cout << "infinite" << endl;
        return 0;
    }
    cout << (m-nowm)/(n-check)+a.at(check) << endl;
}