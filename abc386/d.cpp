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
    ll n,m;
    cin >> n >> m;
    vector<ll> x(m),y(m);
    vector<char> c(m);
    rep(i,m){
        cin >> x.at(i) >> y.at(i) >> c.at(i);
    }
    vector<ll> w(n),h(n);//w:x,h:y
    rep(i,m){
        if(c.at(i)=='B'){
            if(w.at(x.at(i)-1)<y.at(i)){
                w.at(x.at(i)-1)=y.at(i);
            }
            if(h.at(y.at(i)-1)<x.at(i)){
                h.at(y.at(i)-1)=x.at(i);
            }
        }
    }
    rep(i,m){
        if(c.at(i)=='W'){
            if(w.at(x.at(i)-1)>=y.at(i)){
                cout << "No" << endl;
                return 0;
            }
            if(h.at(y.at(i)-1)>=x.at(i)){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
}