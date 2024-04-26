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
template<typename T> void combSort(vector<T>& v){
  size_t h = (v.size()*10)/13;
  bool is_sorted = false;
  vector<pair<ll,ll>> swaps(0);
  while(!is_sorted){
    if(h==1)is_sorted = true;
    for(size_t i=0; i<v.size()-h; ++i){
      if(v[i]>v[i+h]){
        swaps.push_back({v.at(i),v.at(i+h)});
        swap(v[i],v[i+h]);
        if(is_sorted)is_sorted = false;
      }
    }
    if(h>1) h = (h*10)/13;
    if(h==0) h = 1;
  }
  cout << swaps.size() << endl;
  rep(i,swaps.size()){
    cout << swaps.at(i).first << ' ' << swaps.at(i).second << endl;
  }
}
int main(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n){
        cin >> a.at(i);
    }
    combSort(a);
}
