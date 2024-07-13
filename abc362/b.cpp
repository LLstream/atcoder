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
    ll x1,x2,x3,y1,y2,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    ll h1,h2,h3;
    h1=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);//1-2
    h2=(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);//2-3
    h3=(x3-x1)*(x3-x1)+(y3-y1)*(y3-y1);//3-1
    if(h1==h2+h3||h2==h1+h3||h3==h1+h2){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}