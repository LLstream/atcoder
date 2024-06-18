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
    int n,m;
    cin >> n >> m;
    vector<vector<int>> a(n);
    vector<int> x(n,0);
    rep(i,m){
        int u,v;
        cin >> u >> v;
        a.at(u-1).push_back(v-1);
        x.at(u-1)+=1;//それぞれの要素数を管理
        a.at(v-1).push_back(u-1);
        x.at(v-1)+=1;//それぞれの要素数を管理
    }
    int count=0;
    rep(i,n){
        for(int j=0;j<x.at(i);j++){
            int b=a.at(i).at(j);//2つめの頂点
            for(int k=0;k<x.at(b);k++){
                int c=a.at(b).at(k);//３つめの頂点
                for(int l=0;l<x.at(c);l++){
                    int d=a.at(c).at(l);
                    if(i==d){
                        count++;
                    }
                }
            }
        }
    }
    cout << count/6 << endl;
}