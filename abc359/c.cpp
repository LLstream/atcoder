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
    ll sx,sy,tx,ty;
    cin >> sx >> sy >> tx >> ty;
    ll ans=0;
    // x=0,y=0が原点
    // x%2=0&&y%2=0は右が同じタイル x%2=1&&y%2=0は左 x%2=0&&y%2=1は左 x%2=1&&y%2=1は右
    ll sabunx=tx-sx,sabuny=ty-sy;
    ll cons,cont;//0が右　1が左
    if((sx+sy)%2==0){
        cons=0;
    }
    else{
        cons=1;
    }
    if((tx+ty)%2==0){
        cont=0;
    }
    else{
        cont=1;
    }
    ans+=abs(sabuny);
    if(abs(sabunx)>abs(sabuny)){
        if(sabunx<0){
            if(cons==1){
                sabunx++;
            }
            if(cont==0){
                sabunx++;
            }
            if(sabunx>0){
                sabunx=0;
            }
        }
        else if(sabunx>0){
            if(cons==0){
                sabunx--;
            }
            if(cont==1){
                sabunx--;
            }
            if(sabunx<0){
                sabunx=0;
            }
        }
        if(abs(sabunx)-abs(sabuny)>0){
            ans+=(abs(sabunx)-abs(sabuny)+1)/2;
        }
    }
    cout << ans << endl;
}