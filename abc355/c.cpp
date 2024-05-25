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
    ll n,t,cnt=0,r=0,l=0;//rは/ lは逆
    cin >> n >> t;
    vector<ll> w(n),h(n);//wは→ hは↓
    rep(i,t){
        cnt++;
        ll a;
        cin >> a;
        a--;
        ll ans=a/n,mod=a%n;
        w.at(ans)++;
        h.at(mod)++;
        if(ans==mod){
            r++;
        }
        if(ans==n-1-mod){
            l++;
        }
        if(w.at(ans)==n||h.at(mod)==n||r==n||l==n){
            cout << cnt << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}