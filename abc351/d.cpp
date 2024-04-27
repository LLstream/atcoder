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
using pint = pair<int,int>;
int main() {
  ll h,w;
  cin >> h >> w;
  vector<string> s(h);
  vector<pair<ll,ll>> sya(0);
  rep(i,h){
    cin >> s.at(i);
    rep(j,w){
      if(s.at(i).at(j)=='#'){
        sya.push_back({i,j});
      }
    }
  }
  ll z=0;
  rep(i,sya.size()){
    if(s.at(max(z,sya.at(i).first-1)).at(sya.at(i).second)!='#')s.at(max(z,sya.at(i).first-1)).at(sya.at(i).second)='!';
    if(s.at(sya.at(i).first).at(max(z,sya.at(i).second-1))!='#')s.at(sya.at(i).first).at(max(z,sya.at(i).second-1))='!';
    if(s.at(sya.at(i).first).at(min(w-1,sya.at(i).second+1))!='#')s.at(sya.at(i).first).at(min(w-1,sya.at(i).second+1))='!';
    if(s.at(min(h-1,sya.at(i).first+1)).at(sya.at(i).second)!='#')s.at(min(h-1,sya.at(i).first+1)).at(sya.at(i).second)='!';
  }
  vector<ll> ans(1,1);
  vector<int> dx={1,0,-1,0};
  vector<int> dy={0,1,0,-1};
  vector<vector<ll>> dist(h,vector<ll>(w,-1));
  rep(i,h){
    rep(j,w){
      if(s.at(i).at(j)=='#')continue;
      if(dist.at(i).at(j)!=-1)continue;
      int sx=i,sy=j;
      queue<pint> que;
      que.push({sx,sy});
      dist[sx][sy]=0;
      ll cnt=1;
      ll x2,y2;
      while(!que.empty()){
        auto [x,y]=que.front();
        que.pop();
        if(s[x][y]=='!')continue;
        for(int dir=0;dir<4;dir++){
          x2=x+dx[dir];
          y2=y+dy[dir];
          if(x2<0||x2>=h||y2<0||y2>=w)continue;
          if(s[x2][y2]=='#')continue;
          if(dist[x2][y2]!=-1) continue;
          que.push({x2,y2});
          dist[x2][y2]=dist[x][y]+1;
          cnt++;
        }
      }
      ans.push_back(cnt);
    }
  }
  sort(ans.rbegin(),ans.rend());
  cout << ans.at(0) << endl;
}