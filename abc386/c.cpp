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
    ll k;
    cin >> k;
    string s,t;
    cin >> s >> t;
    if(abs(ll(s.size())-ll(t.size()))>1){
        cout << "No" << endl;
        return 0;
    }
    if(s.size()==t.size()){
        ll num=0;
        rep(i,s.size()){
            if(s.at(i)!=t.at(i)){
                num++;
            }
        }
        if(num<=1){
            cout << "Yes" << endl;
            return 0;
        }
        else{
            cout << "No" << endl;
            return 0;
        }
    }
    else if(s.size()<t.size()){
        rep(i,s.size()){
            ll num=0;
            if(num==0){
                if(s.at(i)!=t.at(i)){
                    num++;
                    if(s.at(i)!=t.at(i+1)){
                        cout << "No" << endl;
                        return 0;
                    }
                }
            }
            else{
                if(s.at(i)!=t.at(i+1)){
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    else{
        rep(i,t.size()){
            ll num=0;
            if(num==0){
                if(s.at(i)!=t.at(i)){
                    num++;
                    if(s.at(i+1)!=t.at(i)){
                        cout << "No" << endl;
                        return 0;
                    }
                }
            }
            else{
                if(s.at(i+1)!=t.at(i)){
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
}