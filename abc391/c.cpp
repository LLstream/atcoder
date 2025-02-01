#include <bits/stdc++.h>
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
using mint = modint998244353;
#endif
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < (n); i++)

int main() {
    ll n, q;
    cin >> n >> q;
    vector<ll> place(n+1);
    vector<ll> num(n+1);
    for(ll i = 1; i <= n; i++){
        place.at(i)=i;
        num.at(i)=1;
    }
    ll count=0;
    rep(i,q){
        ll query;
        cin >> query;
        if(query==1){
            ll p,h;
            cin >> p >> h;
            ll oldplace=place.at(p);
            if(num.at(oldplace)==2){
                count--;
            }
            num.at(oldplace)--;
            if(num.at(h)==1){
                count++;
            }
            num.at(h)++;
            place.at(p)=h;
        }
        else if(query==2){
            cout << count << endl;
        }
    }
}