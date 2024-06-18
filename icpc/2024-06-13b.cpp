#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0;i < (n);i++)
using ll = long long;

int main() {
    vector<int> answer(0);
    while(1){
        int h,w;
        cin >> h >> w;
        if(h == 0 && w == 0){
            break;
        }

        map<char,pair<int,int>> b;
        rep(i,h){
            string s;
            cin >> s;
            rep(j,s.size()){
                if(s[j] != '_'){
                    b[s[j]] = {i,j};
                }
            }
        }

        string t;
        cin >> t;
        ll ans = 0;
        pair<int,int> now = {0,0};
        for(auto x:t){
            ans += abs(now.first - b[x].first)+ abs(now.second - b[x].second)+1;
            now = b[x];
        }

        answer.push_back(ans);
    }
    for(auto x:answer){
        cout << x << endl;
    }
}