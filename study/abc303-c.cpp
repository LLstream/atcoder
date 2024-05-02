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
    ll n,m,h,k;
    cin >> n >> m >> h >> k;
    string s;
    cin >> s;
    
    map<pair<ll,ll>,bool> kaihuku;
    vector<ll> x(m),y(m);
    rep(i,m){
        cin >> x.at(i) >> y.at(i);
        kaihuku[{x.at(i),y.at(i)}]=true;
    }
    ll nowx=0,nowy=0;
    rep(i,n){
        if(s.at(i)=='R')nowx++;
        if(s.at(i)=='L')nowx--;
        if(s.at(i)=='U')nowy++;
        if(s.at(i)=='D')nowy--;
        h--;
        if(h==-1){
            cout << "No" << endl;
            return 0;
        }
        if(kaihuku.count({nowx,nowy})){
            if(h<k){
                h=k;
                kaihuku.erase({nowx,nowy});
            }
        }
    }
    cout << "Yes" << endl;
}