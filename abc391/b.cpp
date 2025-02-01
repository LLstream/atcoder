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
    vector<string> s(n),t(m);
    rep(i,n){
        cin >> s.at(i);
    }
    rep(i,m){
        cin >> t.at(i);
    }
    // m<=n
    // sの中にtがあるかどうか
    // tの(0,0)がある位置s(i,j)のi,jを空白区切りで出力
    rep(i,n-m+1){
        rep(j,n-m+1){
            bool check=true;
            rep(k,m){
                rep(l,m){
                    if(s.at(i+k).at(j+l)!=t.at(k).at(l)){
                        check=false;
                        break;
                    }
                }
                if(!check){
                    break;
                }
            }
            if(check){
                cout << i+1 << " " << j+1 << endl;
            }
        }
    }
}