#include <bits/stdc++.h>
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
using namespace std;
using mint = modint998244353;

int main() {
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a.at(i);
    }
    vector<vector<int>> list(n,vector<int>(0));
    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v;
        list.at(u-1).push_back(v-1);
        list.at(v-1).push_back(u-1);
    }
    int max=0;
    while(true){
        
    }
}