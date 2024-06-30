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
    ll n,t;
    cin >> n >> t;
    string s;
    cin >> s;
    vector<pair<ll,ll>> x(0);
    rep(i,n){
        ll a;
        cin >> a;
        if(s.at(i)=='1'){
            x.push_back({a,1});
            x.push_back({a+t,3});
        }
        if(s.at(i)=='0'){
            x.push_back({a,0});
            x.push_back({a-t,2});
        }
    }
    ll nowp=0,nowm=0,ans=0;
    sort(x.begin(),x.end());
    rep(i,x.size()){
        if(x.at(i).second==0){
            nowm--;
        }
        if(x.at(i).second==2){
            nowm++;
            ans+=nowp;
        }
        if(x.at(i).second==1){
            nowp++;
            ans+=nowm;
        }
        if(x.at(i).second==3){
            nowp--;
        }
    }
    cout << ans << endl;
    // vector<ll> p(0),m(0);
    // rep(i,n){
    //     if(s.at(i)=='1'){
    //         ll a;
    //         cin >> a;
    //         p.push_back(a);
    //     }
    //     if(s.at(i)=='0'){
    //         ll a;
    //         cin >> a;
    //         m.push_back(a);
    //     }
    // }
    // sort(p.begin(),p.end());
    // sort(m.begin(),m.end());
    // ll ans=0,now=0;
    // rep(i,p.size()){
    //     rep(j,m.size()){
    //         if(p.at(i)+t>=m.at(j)-t){
    //             ans++;
    //         }
    //         else{
    //             break;
    //         }
    //     }
    // }
    // cout << ans << endl;
}