#include <bits/stdc++.h>
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
using namespace std;
using mint = modint998244353;

int main() {
    int n;
    cin >> n;
    int a=0,b=0,c=0;
    while(true){
        cout << a << ' ' << b << ' ' << c << endl;
        if(a+b+c<n){
            c++;
        }
        else{
            c=0;
            if(b!=n-a){
                b++;
            }
            else{
                b=0;
                if(a!=n){
                    a++;
                }
                else{
                    cout << a << ' ' << b << ' ' << c << endl;
                    break;
                }
            }
        }
    }
}