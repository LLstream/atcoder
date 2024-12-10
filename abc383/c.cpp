#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
int main() {
    ll h,w,d;
    cin >> h >> w >> d;
    vector<string> s(h);
    queue<tuple<ll,ll,ll>> q;
    set<pair<ll,ll>> visited;
    vector<pair<ll,ll>> directions={{1,0},{0,1},{-1,0},{0,-1}};
    rep(i,h){
        cin >> s.at(i);
        rep(j,w){
            if(s.at(i).at(j)=='H'){
                q.emplace(i,j,0);
                visited.emplace(i,j);
            }
        }
    }
    while(!q.empty()){
        auto [x,y,dist]=q.front();
        q.pop();
        if (dist>=d){
            continue;
        }
        for(auto [dx,dy]:directions){
            ll nx=x+dx,ny=y+dy;
            if(nx<0||nx>=h||ny<0||ny>=w){
                continue;
            }
            if (s[nx][ny]=='#'){
                continue;
            }
            if(visited.count({nx,ny})){
                continue;
            }
            visited.emplace(nx,ny);
            q.emplace(nx, ny, dist + 1);
        }
    }
    cout << visited.size() << endl;
}
