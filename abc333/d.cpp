#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> list(n+1,vector<int>(0));
    for(int i=0;i<n-1;i++){
        int u,v;
        cin >> u >> v;
        list.at(u).push_back(v);
        list.at(v).push_back(u);
    }
    int now,count=0;
    stack<int> s;
    s.push(1);
    while(true){
        now=s.top();
        s.pop();
        for(int i=0;i)
    }
}