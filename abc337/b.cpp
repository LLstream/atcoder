#include <bits/stdc++.h>
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
using namespace std;
using ll = long long;
using mint = modint998244353;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
int main() {
    ll h,w,n;
    cin >> h >> w >> n;
    ll now=0;
    ll nowh=0,noww=0;
    vector<vector<char>> ans(h,vector<char>(w,'.'));
    rep(i,n){
        if(ans.at(nowh).at(noww)=='.'){
            ans.at(nowh).at(noww)='#';
            now++;
            if(now==4){
                now=0;
            }
        }
        else{
            ans.at(nowh).at(noww)='.';
            now--;
            if(now==-1){
                now=3;
            }
        }
        if(now==0){
            nowh--;
            if(nowh==-1){
                nowh=h-1;
            }
        }
        else if(now==1){
            noww++;
            if(noww==w){
                noww=0;
            }
        }
        else if(now==2){
            nowh++;
            if(nowh==h){
                    nowh=0;
            }
        }
        else if(now==3){
            noww--;
            if(noww==-1){
                noww=w-1;
            }
        }
    }
    rep(i,h){
        rep(j,w){
            cout << ans.at(i).at(j);
        }
        cout << endl;
    }
}