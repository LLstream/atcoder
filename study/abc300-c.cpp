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
    vector<vector<char>> c(h,vector<char>(w));
    vector<vector<ll>> check(h,vector<ll>(w,-1));
    rep(i,h){
        rep(j,w){
            cin >> c.at(i).at(j);
        }
    }
    vector<ll> ans(min(h,w),0);
    rep(i,h){
        rep(j,w){
            if(check.at(i).at(j)!=-1){
                continue;
            }
            else{
                if(c.at(i).at(j)=='#'){
                    if(i==h-1||j==w-1||c.at(i+1).at(j+1)=='.'){
                        continue;
                    }
                    check.at(i).at(j)++;
                    ll x=i,y=j,n=1;
                    while(true){
                        if(x==h||y==w){
                            ans.at(n/2-2)++;
                       AA     break;
                        }
                        if(c.at(x).at(y)=='.'){
                            ans.at(n/2-2)++;
                            break;
                        }
                        else{
                            check.at(x).at(y)++;
                            x++;
                            y++;
                            n++;
                        }
                    }
                }
            }
        }
    }
    rep(i,ans.size()){
        cout << ans.at(i);
        if(i!=ans.size()-1){
            cout << " ";
        }
    }
    cout << endl;
}