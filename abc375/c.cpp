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
  vector<string> s(n);
  vector<vector<char>> t(n,vector<char>(n));
  rep(i,n){
    cin >> s.at(i);
  }
  rep(i,n/2){
    if(i%4==0){
      rep1(j,i,n-i){
        t.at(i).at(j)=s.at(n-i-1-j).at(i);
        t.at(n-i-1-j).at(i)=s.at(n-i-1-i).at(n-i-1-j);
        t.at(n-i-1-i).at(n-i-1-j)=s.at(j).at(n-i-1-i);
        t.at(j).at(n-i-1-i)=s.at(i).at(j);
      }
    }
    else if(i%4==1){
      rep1(j,i,n-i){
        t.at(i).at(j)=s.at(j).at(i);
        t.at(j).at(i)=s.at(n-i-1-i).at(j);
        t.at(n-i-1-i).at(j)=s.at(n-i-1-j).at(n-i-1-i);
        t.at(n-i-1-j).at(n-i-1-i)=s.at(i).at(n-i-1-j);
      }
    }
    else if(i%4==2){
      rep1(j,i,n-i){
        t.at(i).at(j)=s.at(i).at(j);
        t.at(i).at(j)=s.at(j).at(n-i-1-i);
        t.at(j).at(n-i-1-i)=s.at(n-i-1-i).at(n-i-1-j);
        t.at(n-i-1-i).at(n-i-1-j)=s.at(n-i-1-j).at(i);
      }
    }
    else{
      rep1(j,i,n-i){
        t.at(i).at(j)=s.at(n-i-1-j).at(i);
        t.at(n-i-1-j).at(i)=s.at(n-i-1-i).at(n-i-1-j);
        t.at(n-i-1-i).at(n-i-1-j)=s.at(j).at(n-i-1-i);
        t.at(j).at(n-i-1-i)=s.at(i).at(j);
      }
    }
  }
  rep(i,n){
    rep(j,n){
      cout << t.at(i).at(j);
    }
    cout << endl;
  }
}