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
    ll h,w,x,p,q;
    cin >> h >> w >> x >> p >> q;
    p--;
    q--;
    vector<vector<ll>> s(h,vector<ll>(w));
    rep(i,h){
        rep(j,w){
            cin >> s.at(i).at(j);
        }
    }
    vector<vector<set<pair<ll,ll>>>> list(h,vector<set<pair<ll,ll>>>(w));
    rep(i,h){
        rep(j,w){
            if(i>0){
                list.at(i).at(j).insert({i-1,j});
            }
            if(i<h-1){
                list.at(i).at(j).insert({i+1,j});
            }
            if(j>0){
                list.at(i).at(j).insert({i,j-1});
            }
            if(j<w-1){
                list.at(i).at(j).insert({i,j+1});
            }
        }
    }
    vector<vector<bool>> visited(h,vector<bool>(w,false));// 本番ではこれ忘れてた
    visited.at(p).at(q)=true;
    // 隣接してるやつの中の強さランキング
    priority_queue<pair<ll,pair<ll,ll>>,vector<pair<ll,pair<ll,ll>>>,greater<pair<ll,pair<ll,ll>>>> stronglist;
    vector<pair<ll,ll>> b(list.at(p).at(q).begin(),list.at(p).at(q).end());
    rep(i,b.size()){
        visited.at(b.at(i).first).at(b.at(i).second)=true;
        stronglist.push({s.at(b.at(i).first).at(b.at(i).second),{b.at(i).first,b.at(i).second}});
    }
    while(1){
        if(stronglist.empty()){
            break;
        }
        if(double(stronglist.top().first)>=double(s.at(p).at(q))/x){
            break;
        }
        s.at(p).at(q)+=stronglist.top().first;
        ll newx=stronglist.top().second.first,newy=stronglist.top().second.second;
        stronglist.pop();
        vector<pair<ll,ll>> c(list.at(newx).at(newy).begin(),list.at(newx).at(newy).end());
        rep(i,list.at(newx).at(newy).size()){
            // ここ追加したやつ
            if(visited.at(c.at(i).first).at(c.at(i).second)){
                continue;
            }
            visited.at(c.at(i).first).at(c.at(i).second)=true;
            stronglist.push({s.at(c.at(i).first).at(c.at(i).second),{c.at(i).first,c.at(i).second}});
        }
    }
    cout << s.at(p).at(q) << endl;
}