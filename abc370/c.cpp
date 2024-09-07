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
    string s,t;
    cin >> s >> t;
    vector<ll> check(s.size());
    ll ans=0;
    rep(i,s.size()){
        if(s.at(i)==t.at(i)){
            check.at(i)=0;
        }
        else if(s.at(i)<t.at(i)){
            check.at(i)=1;
            ans++;
        }
        else if(s.at(i)>t.at(i)){
            check.at(i)=2;
            ans++;
        }
    }
    cout << ans << endl;
    vector<bool> c(s.size(),false);
    ll now=0;
    while(1){
        if(check.at(now)==0){
            c.at(now)=true;
        }
        else if(check.at(now)==1){
        }
        else{
            s.at(now)=t.at(now);
            cout << s << endl;
            c.at(now)=true;
        }
        now++;
        if(now==s.size()){
            break;
        }
    }
    now--;
    while(1){
        if(check.at(now)==0){
        }
        else if(check.at(now)==1){
            s.at(now)=t.at(now);
            cout << s << endl;
            c.at(now)=true;
        }
        else{
        }
        now--;
        if(now==-1){
            break;
        }
    }
}