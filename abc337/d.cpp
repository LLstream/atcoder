#include <bits/stdc++.h>
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
using namespace std;
using ll = long long;
using mint = modint998244353;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
int main() {
    ll n;
    cin >> n;
    vector<string> s(n);
    ll p1h,p1w,p2h,p2w;
    ll cnt=0;
    rep(i,n){
        cin >> s.at(i);
        rep(j,s.at(i).size()){
            if(s.at(i).at(j)=='p'){
                if(cnt==0){
                    p1h=i;
                    p1w=j;
                }
                else{
                    p2h=i;
                    p2w=j;
                }
            }
        }
    }
    
}