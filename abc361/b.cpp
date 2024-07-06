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
    ll x1,x2,x3,x4,y1,y2,y3,y4,z1,z2,z3,z4;
    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
    cin >> x3 >> y3 >> z3 >> x4 >> y4 >> z4;
    bool x=false,y=false,z=false;
    if(x1==x3){
        x=true;
    }
    if(x2==x4){
        x=true;
    }
    if(y1==y3){
        y=true;
    }
    if(y2==y4){
        y=true;
    }
    if(z1==z3){
        z=true;
    }
    if(z2==z4){
        z=true;
    }
    if(x1<x3&&x3<x2){
        x=true;
    }
    else if(x1<x4&&x4<x2){
        x=true;
    }
    else if(x1<x3&&x4<x2){
        x=true;
    }
    else if(x3<x1&&x2<x4){
        x=true;
    }
    if(y1<y3&&y3<y2){
        y=true;
    }
    else if(y1<y4&&y4<y2){
        y=true;
    }
    else if(y1<y3&&y4<y2){
        y=true;
    }
    else if(y3<y1&&y2<y4){
        y=true;
    }
    if(z1<z3&&z3<z2){
        z=true;
    }
    else if(z1<z4&&z4<z2){
        z=true;
    }
    else if(z1<z3&&z4<z2){
        z=true;
    }
    else if(z3<z1&&z2<z4){
        z=true;
    }
    if(x&&y&&z){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
}