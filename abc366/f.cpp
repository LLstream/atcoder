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
    ll n,k;
    cin >> n >> k;
    vector<pair<ll,ll>> a(n);
    rep(i,n){
        ll aa,b;
        cin >> aa >> b;
        a.at(i)={aa,-b};
    }
    sort(a.rbegin(),a.rend());
    ll ans=0;
    if(k==n||a.at(k-1).first!=a.at(k).first){
        rep(i,k){
            if(i==0){
                ans+=a.at(k-1).first-a.at(k-1).second;
            }
            else{
                ans*=a.at(k-1-i).first;
                ans-=a.at(k-1-i).second;
            }
        }
    }
    else{
        ll j=k-1;
        while(j<n-1){
            if(a.at(j).first!=a.at(j+1).first){
                break;
            }
            j++;
        }
        rep(i,k){
            if(i==0){
                ans+=a.at(j).first-a.at(j).second;
            }
            else{
                ans*=a.at(k-1-i).first;
                ans-=a.at(k-1-i).second;
            }
        }
    }
    cout << ans << endl;
}