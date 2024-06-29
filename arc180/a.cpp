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
    // 解けてねぇ
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> c(0);
    rep(i,n-2){
        if(s.substr(i,3)=="ABA"){
            c.push_back(i);
            cout << i << endl;
        }
        if(s.substr(i,3)=="BAB"){
            c.push_back(i);
            cout << i << endl;
        }
    }
    modint1000000007 ans=1;
    set<string> t;
    queue<pair<string,vector<ll>>> q;
    q.push({s,c});
    t.insert(s);
    while(q.size()){
        vector<ll> b=q.front().second;
        rep(i,b.size()){
            cerr << "done" << endl;
            string a=q.front().first;
            a.erase(b.at(i),3);
            if(t.count(a)){
                continue;
            }
            ll z=b.at(i);
            vector<ll> e=b;
            e.erase(e.begin()+i);
            for(int j=0;j>-min(int(z+1),3);j--){
                if(s.substr(int(z)+j,3)=="ABA"){
                    e.push_back(int(z)+j);
                }
                if(s.substr(int(z)+j,3)=="BAB"){
                    e.push_back(int(z)+j);
                }
            }
            if(!t.count(a)){
                ans++;
                t.insert(a);
                q.push({a,e});
            }
        }
        q.pop();
    }
    cout << ans.val() << endl;
}