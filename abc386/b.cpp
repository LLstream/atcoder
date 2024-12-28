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
    ll num=0;
    vector<ll> check(s.size(),0);
    rep(i,s.size()-1){
        if(s.at(i)=='0'&&s.at(i+1)=='0'&&check.at(i)==0){
            num++;
            check.at(i)=1;
            check.at(i+1)=1;
        }
    }
    cout << s.size()-num << endl;
}