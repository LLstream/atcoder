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
    ll q;
    cin >> q;
    map<ll,ll> mp;
    set<ll> st;
    rep(i,q){
        ll n;
        cin >> n;
        if(n==3){
            cout << st.size() << endl;
        }
        if(n==1){
            ll x;
            cin >> x;
            st.insert(x);
            if(mp[x]){
                mp.at(x)++;
            }
            else{
                mp[x]=1;
            }
        }
        if(n==2){
            ll x;
            cin >> x;
            mp.at(x)--;
            if(mp.at(x)==0){
                st.erase(x);
            }
        }
    }
}