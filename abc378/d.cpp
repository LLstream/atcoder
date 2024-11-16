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
ll h,w,k;
vector<vector<char>> s;
vector<vector<bool>> visited;
mint ans = 0;
void dfs(ll x,ll y,ll steps_remaining){
    if(steps_remaining==0){
        ans++;
        return;
    }
    vector<ll> dx={1,-1,0,0};
    vector<ll> dy={0,0,1,-1};
    rep(d,4){
        ll nx=x+dx.at(d);
        ll ny=y+dy.at(d);
        if(nx>=0&&nx<h&&ny>=0&&ny<w){
            if(s.at(nx).at(ny)=='.'&&!visited.at(nx).at(ny)) {
                visited.at(nx).at(ny)=true;
                dfs(nx,ny,steps_remaining-1);
                visited.at(nx).at(ny)=false;
            }
        }
    }
}
int main() {
    cin >> h >> w >> k;
    s.resize(h,vector<char>(w));
    rep(i,h){
        rep(j,w){
            cin >> s.at(i).at(j);
        }
    }
    visited.resize(h,vector<bool>(w));
    rep(i,h){
        rep(j,w){
            if(s.at(i).at(j)=='.'){
                visited.at(i).at(j)=true;
                dfs(i,j,k);
                visited.at(i).at(j)=false;
            }
        }
    }
    cout << ans.val() << endl;
}
