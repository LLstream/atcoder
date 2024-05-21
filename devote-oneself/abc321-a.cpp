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
    string n;
    cin >> n;
    if(n.size()==1){
        cout << "Yes" << endl;
        return 0;
    }
    rep(i,n.size()-1){
        if(*(n.begin()+i)<=*(n.begin()+i+1)){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}