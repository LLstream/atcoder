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
    ll n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<pair<ll,ll>> a(0);
    ll iti=0,kazu=0;
    rep(i,n){
        kazu++;
        if(i==0){
            if(s.at(i)=='1'){
                iti=i;
                kazu=0;
            }
        }
        else{
            if(s.at(i-1)=='0'&&s.at(i)=='1'){
                iti=i;
                kazu=0;
            }
        }
        if(i!=0&&s.at(i-1)=='1'&&s.at(i)=='0'){
            a.push_back({iti,kazu});
            iti=0;
            kazu=0;
        }
        if(i==n-1&&s.at(n-1)=='1'){
            a.push_back({iti,kazu});
        }
    }
    a.at(a.size()-1).second++;
    a.push_back({n,0});
    iti=a.at(k-1).first;
    kazu=a.at(k-1).second;
    // rep(i,a.size()){
    //     cout << a.at(i).first << " " << a.at(i).second << endl;
    // }
    rep(i,n){
        if(i<a.at(k-2).first+a.at(k-2).second||i>=a.at(k).first){
            cout << s.at(i);
        }
        else{
            if(i<a.at(k-2).first+a.at(k-2).second+kazu){
                cout << 1;
            }
            else{
                cout << 0;
            }
        }
    }
}