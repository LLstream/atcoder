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
    string s;
    cin >> s;
    vector<ll> high(0),low(0);
    vector<ll> ans(s.size()+1);
    if(s.at(0)=='<'){
        low.push_back(0);
    }
    else{
        high.push_back(0);
    }
    rep(i,s.size()-1){
        if(s.at(i)=='>'&&s.at(i+1)=='<'){
            low.push_back(i+1);
        }
        if(s.at(i)=='<'&&s.at(i+1)=='>'){
            high.push_back(i+1);
        }
    }
    if(s.at(s.size()-1)=='>'){
        low.push_back(s.size());
    }
    else{
        high.push_back(s.size());
    }

    // rep(i,low.size()){
    //     cout << low.at(i) << " ";
    // }
    // cout << endl;
    // rep(i,high.size()){
    //     cout << high.at(i) << " ";
    // }
    // cout << endl;

    rep(i,low.size()){
        if(low.at(0)<high.at(0)){
            if(i==0){
                ll a=low.at(0);
                while(1){
                    a++;
                    if(a==high.at(0)){
                        ans.at(a)=max(ans.at(a),ans.at(a-1)+1);
                        break;
                    }
                    ans.at(a)=ans.at(a-1)+1;
                }
            }
            else if(i==low.size()-1){
                if(low.at(low.size()-1)>high.at(high.size()-1)){
                    ll a=low.at(i);
                    while(1){
                        a--;
                        if(a==high.at(high.size()-1)){
                            ans.at(a)=max(ans.at(a),ans.at(a+1)+1);
                            break;
                        }
                        ans.at(a)=ans.at(a+1)+1;
                    }
                }
                else{
                    ll a=low.at(i);
                    while(1){
                        a++;
                        if(a==high.at(high.size()-1)){
                            ans.at(a)=max(ans.at(a),ans.at(a-1)+1);
                            break;
                        }
                        ans.at(a)=ans.at(a-1)+1;
                    }
                    a=low.at(i);
                    while(1){
                        a--;
                        if(a==high.at(high.size()-2)){
                            ans.at(a)=max(ans.at(a),ans.at(a+1)+1);
                            break;
                        }
                        ans.at(a)=ans.at(a+1)+1;
                    }
                }
            }
            else{
                ll a=low.at(i);
                while(1){
                    a--;
                    if(a==high.at(i-1)){
                        ans.at(a)=max(ans.at(a),ans.at(a+1)+1);
                        break;
                    }
                    ans.at(a)=ans.at(a+1)+1;
                }
                a=low.at(i);
                while(1){
                    a++;
                    if(a==high.at(i)){
                        ans.at(a)=max(ans.at(a),ans.at(a-1)+1);
                        break;
                    }
                    ans.at(a)=ans.at(a-1)+1;
                }
            }
        }
        else{
            if(i==low.size()-1){
                if(low.at(low.size()-1)>high.at(high.size()-1)){
                    ll a=low.at(i);
                    while(1){
                        a--;
                        if(a==high.at(high.size()-1)){
                            ans.at(a)=max(ans.at(a),ans.at(a+1)+1);
                            break;
                        }
                        ans.at(a)=ans.at(a+1)+1;
                    }
                }
                else{
                    ll a=low.at(i);
                    while(1){
                        a++;
                        if(a==high.at(high.size()-1)){
                            ans.at(a)=max(ans.at(a),ans.at(a-1)+1);
                            break;
                        }
                        ans.at(a)=ans.at(a-1)+1;
                    }
                    a=low.at(i);
                    while(1){
                        a--;
                        if(a==high.at(high.size()-2)){
                            ans.at(a)=max(ans.at(a),ans.at(a+1)+1);
                            break;
                        }
                        ans.at(a)=ans.at(a+1)+1;
                    }
                }
            }
            else{
                ll a=low.at(i);
                while(1){
                    a--;
                    if(a==high.at(i)){
                        ans.at(a)=max(ans.at(a),ans.at(a+1)+1);
                        break;
                    }
                    ans.at(a)=ans.at(a+1)+1;
                }
                a=low.at(i);
                while(1){
                    a++;
                    if(a==high.at(i+1)){
                        ans.at(a)=max(ans.at(a),ans.at(a-1)+1);
                        break;
                    }
                    ans.at(a)=ans.at(a-1)+1;
                }
            }
        }
    }
    // rep(i,s.size()+1){
    //     cout << ans.at(i) << " ";
    // }
    // cout << endl;
    rep(i,s.size()){
        ans.at(i+1)+=ans.at(i);
    }
    cout << ans.at(s.size()) << endl;
}