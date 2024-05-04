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
    string s,t;
    cin >> s >> t;
    ll now=0;
    vector<ll> ans(0);
    rep(i,s.size()){
        rep1(j,now,t.size()){
            if(s.at(i)==t.at(j)){
                ans.push_back(j+1);
                now=j+1;
                break;
            }
        }
    }
    rep(i,ans.size()){
        cout << ans.at(i);
        if(i!=ans.size()-1){
            cout << " ";
        }
    }
    cout << endl;
}