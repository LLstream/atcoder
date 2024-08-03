// 解けてないよ
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
    string s;
    cin >> n >> s;
    ll win=0;
    char last='?'; // 高橋くんが前回出した手を記録する
    rep(i,n){
        if(s.at(i)=='R'&&last!='P'){
            win++;
            last='P'; // グーに勝つためパーを出す
        }
        else if(s.at(i)=='P'&&last!='S'){
            win++;
            last='S'; // パーに勝つためチョキを出す
        }
        else if(s.at(i)=='S'&&last!='R'){
            win++;
            last='R'; // チョキに勝つためグーを出す
        }
        else{
            // 同じ手を続けて出せない場合、負けない手を出す
            if(s.at(i)=='R')last='R'; // チョキを出す (引き分け)
            else if(s.at(i)=='P')last='P'; // グーを出す (引き分け)
            else if(s.at(i)=='S')last='S'; // パーを出す (引き分け)
        }
    }
    ll win1=win;
    win=0;
    last=s.at(0); // 高橋くんが前回出した手を記録する
    rep1(i,1,n){
        if(s.at(i)=='R'&&last!='P'){
            win++;
            last='P'; // グーに勝つためパーを出す
        }
        else if(s.at(i)=='P'&&last!='S'){
            win++;
            last='S'; // パーに勝つためチョキを出す
        }
        else if(s.at(i)=='S'&&last!='R'){
            win++;
            last='R'; // チョキに勝つためグーを出す
        }
        else{
            // 同じ手を続けて出せない場合、負けない手を出す
            if(s.at(i)=='R')last='R'; // チョキを出す (引き分け)
            else if(s.at(i)=='P')last='P'; // グーを出す (引き分け)
            else if(s.at(i)=='S')last='S'; // パーを出す (引き分け)
        }
    }
    cout << max(win,win1) << endl;
}