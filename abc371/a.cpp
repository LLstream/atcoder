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
    char ab,ac,bc;
    cin >> ab >> ac >> bc;
    ll a=0,b=0,c=0;
    if(ab=='>'){
        a++;
    }
    else{
        b++;
    }
    if(ac=='>'){
        a++;
    }
    else{
        c++;
    }
    if(bc=='>'){
        b++;
    }
    else{
        c++;
    }
    if(a==1){
        cout << 'A' << endl;
    }
    else if(b==1){
        cout << 'B' << endl;
    }
    else{
        cout << 'C' << endl;
    }
    // if(a=='>'){
    //     if(b=='>'){
    //         if(c=='>'){
    //             cout << 'B' << endl;
    //         }
    //         else {
    //         }
    //     }
    //     else{
    //         if(c=='>'){
    //             cout << '' << endl;
    //         }
    //         else {

    //         }
    //     }
    // }
    // else{

    // }
}