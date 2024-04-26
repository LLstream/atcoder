#include <bits/stdc++.h>
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
using namespace std;
using ll = long long;
using mint = modint998244353;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
int main(){
  string s;
  cin >> s;
  if(s.size()==1){
    cout << "No" << endl;
    return 0;
  }
  vector<ll> a(26,0);
  rep(i,s.size()){
    a.at(s.at(i)-97)++;
  }
  sort(a.rbegin(),a.rend());
  ll count=1;
  rep1(i,1,a.size()){
    if(a.at(i)==0&&count==1){
      cout << "No" << endl;
      return 0;
    }
    else if(a.at(i)==0&&count!=1){
      continue;
    }
    else if(a.at(i)==a.at(i-1)){
      count++;
      if(count>2){
        cout << "No" << endl;
        return 0;
      }
    }
    else{
      if(count==1){
        cout << "No" << endl;
        return 0;
      }
      else{
        count=1;
      }
    }
  }
  cout << "Yes" << endl;
}