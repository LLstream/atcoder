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
    ll q;
    cin >> s >> q;
    vector<ll> k(q);
    rep(i,q){
        cin >> k.at(i);
    }
    rep(i,q){
        ll md=(k.at(i)-1)%s.size();
        ll num=(k.at(i)-1)/s.size();
        ll hanten=__builtin_popcountll(num)%2;
        char c=s.at(md);
        if(hanten==1){
            if(c<='Z'&&c>='A'){
                c+=32;
            }
            else if(c>='a'&&c<='z'){
                c-=32;
            }
        }
        cout << c << endl;
    }
}