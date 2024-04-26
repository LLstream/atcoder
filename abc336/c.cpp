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
int main() {
    ll n;
    cin >> n;
    if(n==0)cout << '0' << endl;
    vector<ll> a(0);
    ll check=0;
    while(n!=0){
        if(check==1){
            if(n%5==1){
                a.push_back(2);
            }
            else if(n%5==2){
                a.push_back(4);
            }
            else if(n%5==3){
                a.push_back(6);
            }
            else if(n%5==4){
                a.push_back(8);
            }
            else if(n%5==0){
                a.push_back(0);
            }
            n/=5;
        }
        else{
            if(n%5!=0){
                check++;
            }
            if(n%5==1){
                a.push_back(0);
            }
            else if(n%5==2){
                a.push_back(2);
            }
            else if(n%5==3){
                a.push_back(4);
            }
            else if(n%5==4){
                a.push_back(6);
            }
            else if(n%5==0){
                a.push_back(8);
            }
            n/=5;
        }
    }
    rep(i,a.size()){
        cout <<a.at(a.size()-1-i);
    }
    // rep(i,a.size()){
    //     if(i==a.size()-1){
    //         if(a.at(a.size()-1-i)==1){
    //             cout << '0';
    //         }
    //         else if(a.at(a.size()-1-i)==2){
    //             cout << '2';
    //         }
    //         else if(a.at(a.size()-1-i)==3){
    //             cout << '4';
    //         }
    //         else if(a.at(a.size()-1-i)==4){
    //             cout << '6';
    //         }
    //         else if(a.at(a.size()-1-i)==0){
    //             cout << '8';
    //         }
    //     }
    //     else{
    //         if(a.at(a.size()-1-i)==1){
    //             cout << '2';
    //         }
    //         else if(a.at(a.size()-1-i)==2){
    //             cout << '4';
    //         }
    //         else if(a.at(a.size()-1-i)==3){
    //             cout << '6';
    //         }
    //         else if(a.at(a.size()-1-i)==4){
    //             cout << '8';
    //         }
    //         else if(a.at(a.size()-1-i)==0){
    //             cout << '0';
    //         }
    //     }
    // }
    // cout <<endl;
}