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
    ll n,s,sum=0;
    cin >> n >> s;
    vector<ll> a(n);
    rep(i,n){
        cin >> a.at(i);
        sum+=a.at(i);
    }
    s%=sum;
    if(s==0){
        cout << "Yes" << endl;
        return 0;
    }
    ll l=0,r=0,now=a.at(0);
    rep(i,2*n){
        r++;
        now+=a.at(r%n);
        if(now>s){
            while(1){
                now-=a.at(l%n);
                l++;
                if(now<=s){
                    break;
                }
            }
        }
        if(now==s){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}