#include <bits/stdc++.h>
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
using namespace std;
using mint = modint998244353;

int main() {
    int n,q;
    cin >> n >> q;
    vector<int> x(0);
    vector<int> y(0);
    x.push_back(1);
    y.push_back(0);
    for(int i=0;i<q;i++){
        int a;
        cin >> a;
        if(a==1){
            char b;
            cin >> b;
            if(b=='R'){
                x.push_back(x.at(x.size()-1)+1);
                y.push_back(y.at(y.size()-1));
            }
            else if(b=='L'){
                x.push_back(x.at(x.size()-1)-1);
                y.push_back(y.at(y.size()-1));
            }
            else if(b=='U'){
                x.push_back(x.at(x.size()-1));
                y.push_back(y.at(y.size()-1)+1);
            }
            else{
                x.push_back(x.at(x.size()-1));
                y.push_back(y.at(y.size()-1)-1);
            }
        }
        else{
            int b;
            cin >> b;
            if(b<=x.size()){
                cout << x.at(x.size()-1-b+1) << ' ' << y.at(y.size()-1-b+1) << endl;
            }
            else{
                cout << b-x.size()+1 <<" 0" << endl;
            }
        }
    }
}