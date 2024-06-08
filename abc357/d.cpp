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
    mint ans=0;
    ll copyn=n,keta=0;
    while(1){
        copyn/=10;
        keta++;
        if(copyn==0){
            break;
        }
    }
    ans=n*(mint(10).pow(keta).pow(n)-1)/(mint(10).pow(keta)-1);
    cout << ans.val() << endl;
}