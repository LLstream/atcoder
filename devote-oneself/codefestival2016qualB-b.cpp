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
    ll n,a,b,cnta=0,cntb=0;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    rep(i,s.size()){
        if(s.at(i)=='a'){
            cnta++;
            if(cnta+cntb<=a+b){
                cout << "Yes" << endl;
            }
            else{
                cnta--;
                cout << "No" << endl;
            }
        }
        else if(s.at(i)=='b'){
            cntb++;
            if(cnta+cntb<=a+b&&cntb<=b){
                cout << "Yes" << endl;
            }
            else{
                cntb--;
                cout << "No" << endl;
            }
        }
        else{
            cout << "No" << endl;
        }
    }
}