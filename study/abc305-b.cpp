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
    char p,q;
    cin >> p >> q;
    ll pp,qq;
    if(p=='A') pp=0;
    else if(p=='B') pp=1;
    else if(p=='C') pp=2;
    else if(p=='D') pp=3;
    else if(p=='E') pp=4;
    else if(p=='F') pp=5;
    else pp=6;

    if(q=='A') qq=0;
    else if(q=='B') qq=1;
    else if(q=='C') qq=2;
    else if(q=='D') qq=3;
    else if(q=='E') qq=4;
    else if(q=='F') qq=5;
    else qq=6;

    vector<ll> dis;
    dis={0,3,4,8,9,14,23};
    cout << abs(dis.at(pp)-dis.at(qq)) << endl;
}