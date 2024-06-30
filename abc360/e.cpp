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
    mint n1=1,no=0;
    rep(i,k){
        mint nn=n1,nnn=no;
        n1=nn*(n*n-2*n+2)+nnn*2;
        no=nn*2*(n-1)+nnn*(n*n-2);
        cerr << n1.val() << " " << no.val() << endl;
    }
    mint sum=(2+n)*(n-1)/2;
    mint ans=n1;
    if(n!=1){
        ans+=no/(n-1)*sum;
    }
    mint waru=1;
    rep(i,2*k){
        waru*=n;
    }
    ans/=waru;
    cout << ans.val() << endl;
}