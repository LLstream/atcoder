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
    ll n,k,ans=0;
    cin >> n >> k;
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    do{
        bool check=false;
        rep(i,n-k+1){
            string sc=s.substr(i,k),scc;
            scc=sc;
            reverse(scc.begin(),scc.end());
            if(scc==sc){
                check=true;
                break;
            }
        }
        if(!check){
            ans++;
        }
    }while(next_permutation(s.begin(),s.end()));
    cout << ans << endl;
    // rep(i,n-k+1){
    //     if(a.at(i)){
    //         cout << i << endl;
    //     }
    // }
    // rep1(i,1,n-1){//部分文字列の長さ
    //     rep(j,n-i+1){//何文字目から始まる部分列か
    //         if(i<k){
    //             ans++;
    //         }
    //         else{
    //             rep(l,i){
    //                 if(a.at(l)==true&&l+k-1<j+i-1){
    //                     ans++;
    //                 }
    //             }
    //         }
    //     }
    // }
}