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
    vector<ll> a(3);
    rep(i,3){
        cin >> *(a.begin()+i);
    }
    sort(a.begin(),a.end());
    if(*(a.begin()+2)-*(a.begin()+1)==*(a.begin()+1)-*(a.begin())){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}