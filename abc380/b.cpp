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
    vector<ll> a(0);
    ll num=0;
    rep(i,s.size()){
        if(s.at(i)=='|'){
            if(num==0){
                continue;
            }
            a.push_back(num);
            num=0;
        }
        else{
            num++;
        }
    }
    rep(i,a.size()-1){
        cout << a.at(i) << " ";
    }
    cout << a.at(a.size()-1) << endl;
}