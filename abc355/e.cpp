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
    ll n,l,r,ans=0,renge;
    cin >> n >> l >> r;
    renge=r-l+1;
    if(l%2==1){
        cout << "? " << 0 << " " << l << endl;
        ll t;
        cin >> t;
        ans+=t;
        renge--;
        l++;
    }
    ll i=l,j;
    while(1){
        ll a=i,num=0;
        while(1){
            if(a%2==0){
                a/=2;
                num++;
            }
            else{
                break;
            }
        }
        ll b=1,cnt=0;
        rep(i,num){
            if(renge>b){
                b*=2;
                cnt++;
            }
            else if(renge==b){
                break;
            }
            else{
                b/=2;
                cnt--;
                break;
            }
        }
        // cout << b << endl;
        // if(b<=0){
        //     cout << renge << " " << r << endl;
        //     return 0;
        // }
        j=i/b;
        cout << "? " << cnt << " " << j << endl;
        i+=b;
        renge=r-i+1;
        ll  t;
        cin >> t;
        if(t==-1){
            return 0;
        }
        ans+=t;
        ans%=100;
        if(i>r){
            cout << "! " << ans << endl;
            return 0;
        }
    }
}