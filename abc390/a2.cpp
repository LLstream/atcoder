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
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<ll> a(5);
    rep(i,5){
        cin >> a.at(i);
    }
    vector<ll> b={1,2,3,4,5};
    rep(i,4){
        swap(a.at(i),a.at(i+1));
        if(a==b){
            cout << "Yes" << endl;
            return 0;
        }
        swap(a.at(i),a.at(i+1));
    }
    cout << "No" << endl;
    return 0;
}

