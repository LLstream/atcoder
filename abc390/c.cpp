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
    ll h,w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h){
        cin >> s.at(i);
    }
    ll a=h,b=-1,c=w,d=-1;
    rep(i,h){
        rep(j,w){
            if(s.at(i).at(j)=='#'){
                a=min(a,i);
                b=max(b,i);
                c=min(c,j);
                d=max(d,j);
            }
        }
    }
    bool check=true;
    rep(i,h){
        rep(j,w){
            if(i>=a&&i<=b&&j>=c&&j<=d){
                if(s.at(i).at(j)=='.'){
                    check=false;
                }
            }
            else{
                if(s.at(i).at(j)=='#'){
                    check=false;
                }
            }
        }
    }
    if(check){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}
