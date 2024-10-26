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
    vector<ll> a(n),b(n-1);
    rep(i,n){
        cin >> a.at(i);
    }
    rep(i,n-1){
        cin >> b.at(i);
    }
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    ll ans=0,check=0;
    ll j=0;
    rep(i,n){
        if(i==n-1&&j==n-1){
            break;
        }
        if(a.at(i)>b.at(j)){
            if(check==1){
                cout << -1 << endl;
                return 0;
            }
            ans=a.at(i);
            check++;
            j--;
        }
        j++;
    }
    if(check==0){
        ans=a.at(n-1);
    }
    cout << ans << endl;
}