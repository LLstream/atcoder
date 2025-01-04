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
    pair<ll,ll> start,goal;
    rep(i,h){
        rep(j,w){
            if(s.at(i).at(j)=='S'){
                start.first=i;
                start.second=j;
            }
            if(s.at(i).at(j)=='G'){
                goal.first=i;
                goal.second=j;
            }
        }
    }
    vector<vector<vector<ll>>> dist(h,vector<vector<ll>>(w,vector<ll>(2,-1)));
    dist.at(start.first).at(start.second).at(0)=0;
    dist.at(start.first).at(start.second).at(1)=0;
    queue<array<ll,3>> q;
    q.push({start.first,start.second,0});
    q.push({start.first,start.second,1});
    while(!q.empty()){
        auto [x,y,p]=q.front();
        q.pop();
        ll d=dist.at(x).at(y).at(p);
        if(x==goal.first&&y==goal.second){
            cout << d << endl;
            return 0;
        }
        if(p==0){
            if(x-1>=0&&s.at(x-1).at(y)!='#'&&dist.at(x-1).at(y).at(1)==-1){
                dist.at(x-1).at(y).at(1)=d+1;
                q.push({x-1,y,1});
            }
            if(x+1<h&&s.at(x+1).at(y)!='#'&&dist.at(x+1).at(y).at(1)==-1){
                dist.at(x+1).at(y).at(1)=d+1;
                q.push({x+1,y,1});
            }
        } 
        else{
            if(y-1>=0&&s.at(x).at(y-1)!='#'&&dist.at(x).at(y-1).at(0)==-1){
                dist.at(x).at(y-1).at(0)=d+1;
                q.push({x,y-1,0});
            }
            if(y+1<w&&s.at(x).at(y+1)!='#'&&dist.at(x).at(y+1).at(0)==-1){
                dist.at(x).at(y+1).at(0)=d+1;
                q.push({x,y+1,0});
            }
        }
    }
    cout << -1 << endl;
}
