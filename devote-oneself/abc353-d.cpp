#include <bits/stdc++.h>
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
using mint = atcoder::modint998244353;
#endif
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
ll digit(ll x){
    ll cnt=1;
    while(true){
        if(x/10==0){
            break;
        }
        else{
            x/=10;
            cnt++;
        }
    }
    return cnt;
}
int main() {
    ll n,sum=0;
    mint ans=0;
    cin >> n;
    vector<ll> a(n);
    rep(i,n){
        cin >> a.at(i);
        sum+=a.at(i);
    }
    reverse(a.begin(),a.end());
    rep(i,n-1){
        sum-=a.at(i);
        ll tmp=1;
        rep(j,digit(a.at(i))){
            tmp*=10;
        }
        ans+=sum*tmp+a.at(i)*(n-1-i);
    }
    cout << ans.val() << endl;
}