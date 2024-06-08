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
    string s;
    cin >> s;
    ll cntm=0,cntM=0;
    rep(i,s.size()){
        if(s.at(i)<97){
            cntM++;
        }
        else{
            cntm++;
        }
    }
    if(cntm<cntM){
        rep(i,s.size()){
            if(s.at(i)<97){
                continue;
            }
            else{
                s.at(i)-=32;
            }
        }
    }
    else{
        rep(i,s.size()){
            if(s.at(i)<97){
                s.at(i)+=32;
            }
            else{
                continue;
            }
        }
    }
    cout << s << endl;
}