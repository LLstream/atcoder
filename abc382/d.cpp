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
    vector<ll> ans(n,1);
    vector<vector<ll>> a(0,vector<ll>(n,0));
    rep(i,n-1){
        ans.at(i+1)=ans.at(i)+10;
    }
    while(1){
        if(ans.at(n-1)>m){
            ll i=n-1;
            while(i>=0&&(ans.at(i)>m-10*(n-i-1))){
                i--;
            }
            if(i<0){
                break;
            }
            ans.at(i)++;
            rep1(j,i+1,n){
                ans.at(j)=ans.at(j-1)+10;
            }
            continue;
        }
        a.push_back(ans);
        ans.at(n-1)++;
        if(ans.at(n-1)>m){
            ll i=n-1;
            while(i>=0&&(ans.at(i)>m-10*(n-i-1))){
                i--;
            }
            if(i<0){
                break;
            }
            ans.at(i)++;
            rep1(j,i+1,n){
                ans.at(j)=ans.at(j-1)+10;
            }
        }
    }
    cout << a.size() << endl;
    rep(i,a.size()){
        rep(j,n){
            cout << a.at(i).at(j);
            if(j!=n-1){
                cout << " ";
            }
        }
        cout << endl;
    }
}