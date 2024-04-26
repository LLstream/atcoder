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
int main(){
    string s;
    cin >> s;
    if(s=="ABC316"||s=="ABC000"){
        cout << "No" << endl;
        return 0;
    }
    if(s.at(3)<'3'){
        cout << "Yes" << endl;
    }
    else if(s.at(3)=='3'){
        if(s.at(4)<'5'){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    else{
        cout << "No" << endl;
    }
}