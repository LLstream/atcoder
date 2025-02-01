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
#define rep2(i, s, n) for (ll i = s; i > n; i--)

int main(){
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n),a(n),c(n);
    vector<pair<ll,ll>> v1,v2,v3;
    ll sumA1=0,sumA2=0,sumA3=0;
    rep(i,n){
        cin >> v.at(i) >> a.at(i) >> c.at(i);
        if(v.at(i)==1){
            v1.push_back({a.at(i),c.at(i)});
            sumA1+=a.at(i);
        }
        else if(v.at(i)==2){
            v2.push_back({a.at(i),c.at(i)});
            sumA2+=a.at(i);
        }
        else{
            v3.push_back({a.at(i),c.at(i)});
            sumA3+=a.at(i);
        }
    }
    vector<ll> dp1(x+1,0);
    for(auto &p:v1){
        ll aa=p.first;
        ll cc=p.second;
        rep2(j,x,cc-1){
            dp1.at(j)=max(dp1.at(j),dp1.at(j-cc)+aa);
        }
    }
    rep1(i,1,x+1){
        dp1.at(i)=max(dp1.at(i),dp1.at(i-1));
    }
    vector<ll> dp2(x+1,0);
    for(auto &p:v2){
        ll aa=p.first;
        ll cc=p.second;
        rep2(j,x,cc-1){
            dp2.at(j)=max(dp2.at(j),dp2.at(j-cc)+aa);
        }
    }
    rep1(i,1,x+1){
        dp2.at(i)=max(dp2.at(i),dp2.at(i-1));
    }
    vector<ll> dp3(x+1,0);
    for(auto &p:v3){
        ll aa=p.first;
        ll cc=p.second;
        rep2(j,x,cc-1){
            dp3.at(j)=max(dp3.at(j),dp3.at(j-cc)+aa);
        }
    }
    rep1(i,1,x+1){
        dp3.at(i)=max(dp3.at(i),dp3.at(i-1));
    }
    ll Mmax=min({sumA1,sumA2,sumA3});
    if(Mmax==0){
        cout << 0 << endl;
        return 0;
    }
    ll l=0;
    ll r=Mmax+1;
    while(r-l>1){
        ll mid=(l+r)/2;
        ll c1=LLONG_MAX,c2=LLONG_MAX,c3=LLONG_MAX;
        if(dp1.at(x)>=mid){
            ll lll=0,rrr=x;
            while(rrr-lll>1){
                ll M2=(lll+rrr)/2;
                if(dp1.at(M2)>=mid){
                    rrr=M2;
                }
                else{
                    lll=M2;
                }
            }
            c1=rrr;
        }
        if(dp2.at(x)>=mid){
            ll lll=0,rrr=x;
            while (rrr-lll>1){
                ll M2=(lll+rrr)/2;
                if(dp2.at(M2)>=mid){
                    rrr=M2;
                }
                else{
                    lll=M2;
                }
            }
            c2=rrr;
        }
        if(dp3.at(x)>=mid){
            ll lll=0,rrr=x;
            while(rrr-lll>1){
                ll M2=(lll+rrr)/2;
                if(dp3.at(M2)>=mid){
                    rrr=M2;
                }
                else{
                    lll=M2;
                }
            }
            c3=rrr;
        }
        bool ok=(c1!=LLONG_MAX&&c2!=LLONG_MAX&&c3!=LLONG_MAX&&(c1+c2+c3<=x));
        if(ok){
            l=mid;
        }
        else{
            r=mid;
        }
    }
    cout << l << endl;
    return 0;
}
