#include <bits/stdc++.h>
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
using namespace std;
using mint = modint998244353;

int main() {
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(i!=s.size()-1){
            cout << s.at(i);
        }
        else{
            cout << "4 " << endl;
        }
    }
}