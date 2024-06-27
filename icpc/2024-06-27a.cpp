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
    while(1){
        ll n,m;
        cin >> n >> m;
        if(n==0&&m==0){
            return 0;
        }
        vector<ll> a(n);
        rep(i,n){
            cin >> a.at(i);
        }
        sort(a.begin(),a.end());
        ll l=0,r=1,mx=-1;
        rep(i,n-1){
            rep1(j,i+1,n){
                if(a.at(i)+a.at(j)<=m){
                    mx=max(mx,a.at(i)+a.at(j));
                }
            }
        }
        // while(1){
        //     if(r==n&&l==n-1){
        //             break;
        //     }
        //     else if(r==n&&l!=n-1){
        //         r--;
        //         l++;
        //     }
        //     if(a.at(l)+a.at(r)<=m){
        //         mx=max(a.at(l)+a.at(r),mx);
        //         r++;
        //     }
        //     else{
        //         if(r-l!=1){
        //             l++;
        //         }
        //         else{
        //             r++;
        //             l++;
        //         }
        //     }
        // }
        if(mx==-1){
            cout << "NONE" << endl;
        }
        else{
            cout << mx << endl;
        }
    }
}