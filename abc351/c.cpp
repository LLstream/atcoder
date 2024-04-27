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
  ll n;
  cin >> n;
  vector<ll> a(n);
  rep(i,n){
    cin >> a.at(i);
  }
  vector<ll> now(0);
  now.push_back(a.at(0));
  ll nowtama;
  rep1(i,1,n){
    nowtama=a.at(i);
    if(nowtama==now.at(now.size()-1)){
      while(true){
        now.pop_back();
        nowtama++;
        if(now.size()==0){
          now.push_back(nowtama);
          break;
        }
        else if(now.at(now.size()-1)!=nowtama){
          now.push_back(nowtama);
          break;
        }
      }
    }
    else{
      now.push_back(nowtama);
    }
  }
  cout << now.size() << endl;
}