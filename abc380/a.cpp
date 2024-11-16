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
    string s;
    cin >> s;
    ll ans1=0,ans2=0,ans3=0;
    rep(i,s.size()){
        if(s.at(i)=='1'){
            ans1++;
        }
        else if(s.at(i)=='2'){
            ans2++;
        }
        else if(s.at(i)=='3'){
            ans3++;
        }
    }
    if(ans1==1&&ans2==2&&ans3==3){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
}