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
    ll n,m,k;
    cin >> n >> m >> k;
    vector<ll> c(m);
    vector<vector<ll>> a(m,vector<ll>(0));
    vector<char> r(m);
    ll ans=0;
    rep(i,m){
        cin >> c.at(i);
        rep(j,c.at(i)){
            ll b;
            cin >> b;
            a.at(i).push_back(b);
        }
        cin >> r.at(i);
    }
    for(int bit=0;bit<(1<<n);bit++){
        bool check=true;
        for(int i=0;i<m&&check;i++){
            int kcnt=0;
            for(int key:a.at(i)){
                if(bit&(1<<(key-1))){
                    kcnt++;
                }
            }
            if((r.at(i)=='o'&&kcnt<k)||(r.at(i)=='x'&&kcnt>=k)){
                check=false;
            }
        }
        if(check){
            ans++;
        }
    }
    cout << ans << endl;
}