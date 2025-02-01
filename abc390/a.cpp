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
    vector<ll> a(5), b(5);
    rep(i,5){
        cin >> a.at(i);
        b.at(i)=a.at(i);
    }
    sort(a.begin(),a.end());
    vector<ll> c(5);
    bool check=false;
    rep1(i,1,5){
        rep1(j,1,5){
            if(j!=i&&!check){
                c.at(j-1)=b.at(j-1);
            }
            else if(j==i){
                c.at(j-1)=b.at(j);
                c.at(j)=b.at(j-1);
                check=true;
            }
            else{
                c.at(j)=b.at(j);
            }
        }
        rep(j,5){
            if(a.at(j)!=c.at(j)){
                break;
            }
            if(j==4){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}
