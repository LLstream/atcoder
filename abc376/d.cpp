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
    //　隣接リスト
    vector<vector<ll>> list(n);
    rep(i,m){
        ll a,b;
        cin >> a >> b;
        a--;b--;
        list.at(a).push_back(b);
    }
    // 頂点0からbfsして頂点0を含む閉回路があるかどうかを判定,頂点0を含む閉回路があればその閉回路の辺の数,なければ-1を出力
    queue<ll> que;
    que.push(0);
    vector<ll> dist(n,-1);
    dist.at(0)=0;
    while(!que.empty()){
        ll now=que.front();
        que.pop();
        for(ll next:list.at(now)){
            if(dist.at(next)==-1){
                dist.at(next)=dist.at(now)+1;
                que.push(next);
            }else if(dist.at(next)==dist.at(now)+1){
                cout << dist.at(next)+1 << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
}