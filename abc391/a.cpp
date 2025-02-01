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
    if(s=="N"){
        cout << "S" << endl;
    }
    else if(s=="S"){
        cout << "N" << endl;
    }
    else if(s=="W"){
        cout << "E" << endl;
    }
    else if(s=="E"){
        cout << "W" << endl;
    }
    else if(s=="NE"){
        cout << "SW" << endl;
    }
    else if(s=="NW"){
        cout << "SE" << endl;
    }
    else if(s=="SE"){
        cout << "NW" << endl;
    }
    else if(s=="SW"){
        cout << "NE" << endl;
    }
}