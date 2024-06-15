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
    vector<string> s(n);
    rep(i,n) cin >> s.at(i);
    int miin=n+1;
    for (int bit=1;bit<(1<<n);bit++){
        vector<bool> ok(m,false);
        int count=0;
        rep(i,n){
            if (bit&(1<<i)){
                count++;
                rep(j,m){
                    if (s.at(i).at(j)=='o'){
                        ok.at(j)=true;
                    }
                }
            }
        }
        bool all_ok=true;
        rep(j,m){
            if(!ok[j]){
                all_ok=false;
                break;
            }
        }
        if(all_ok){
            miin=min(miin,count);
        }
    }
    cout << miin << endl;
    return 0;
}
