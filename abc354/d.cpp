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
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    a+=1000000000;
    b+=1000000000;
    c+=1000000000;
    d+=1000000000;
    vector<vector<ll>> w(2,vector<ll>(4));
    w.at(1).at(0)=1;
    w.at(1).at(1)=2;
    w.at(1).at(2)=1;
    w.at(1).at(3)=0;
    w.at(0).at(0)=2;
    w.at(0).at(1)=1;
    w.at(0).at(2)=0;
    w.at(0).at(3)=1;
    ll ans=((c-a)/4)*((d-b)/2)*8;
    if((d-b)%2==1){
        ans+=4*((c-a)/4);
    }
    ll aa=a%4,cc=c%4,t=0;
    while(true){
        if(aa==cc){
            break;
        }
        t+=w.at(0).at(aa)+w.at(1).at(aa);
        aa++;
        if(aa==4){
            aa=0;
        }
    }
    ans+=t*((d-b)/2);
    if((d-b)%2!=0){
        aa=a%4,cc=c%4,t=0;
        while(true){
            if(aa==cc){
                break;
            }
            t+=w.at(b%2).at(aa);
            aa++;
            if(aa==4){
                aa=0;
            }
        }
        ans+=t;
    }
    cout << ans << endl;
    //サンプルは通ったんだけどなぁ
}