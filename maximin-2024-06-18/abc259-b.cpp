#include <bits/stdc++.h>
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
using mint = modint998244353;
#endif
#include <math.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
int main() {
    double a,b,d;
    cin >> a >> b >> d;
    cout << fixed << setprecision(7)<< a*cos(d/180*M_PI)-b*sin(d/180*M_PI) << " " << b*cos(d/180*M_PI)+a*sin(d/180*M_PI) << endl;
}