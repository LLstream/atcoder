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
  ll nowball;
  rep1(i,1,n){
    nowball=a.at(i);
    if(nowball==now.at(now.size()-1)){
      while(true){
        now.pop_back();
        nowball++;
        if(now.size()==0){
          now.push_back(nowball);
          break;
        }
        else if(now.at(now.size()-1)!=nowball){
          now.push_back(nowball);
          break;
        }
      }
    }
    else{
      now.push_back(nowball);
    }
  }
  cout << now.size() << endl;
}