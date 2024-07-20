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
    // 解けてない
    ll n;
    cin >> n;
    if(n<10){
        cout << n-1 << endl;
        return 0;
    }
    ll now=10,i=2;//iは桁数
    while(1){
        ll ten=9;
        rep(j,i/2-1){
            ten*=10;
        }
        if(i%2==1){
            ten*=10;
        }
        if(ten+now>=n){
            break;
        }
        now+=ten;
        i++;
    }
    vector<ll> ans(0);
    ll rem=n-now,keta=i/2,waru=9;
    if(i%2==1){
        rep(j,keta){
            waru*=10;
        }
        rep(j,keta){
            ans.push_back((rem-1)/waru);
            waru/=10;
        }
        ans.push_back((rem-1)%9+1);
        rep(j,ans.size()-1){
            cout << ans.at(ans.size()-1-j);
        }
        rep(j,ans.size()){
            cout << ans.at(j);
        }
    }
    else{    
        rep(j,keta-1){
            waru*=10;
        }
        rep(j,keta){
            ans.push_back((rem-1)/waru);
            waru/=10;
        }
        ans.push_back((rem-1)%9+1);
        rep(j,ans.size()){
            cout << ans.at(ans.size()-j);
        }
        rep(j,ans.size()){
            cout << ans.at(j);
        }
    }
    cout << endl;
}