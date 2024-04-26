#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int,int>> a(n);
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin >> a.at(i).first;
        a.at(i).second=i;
    }
    vector<int> a2(n);
    sort(a.begin(),a.end());
    a2.at(0)=a.at(0).first;
    int count=0;
    mp[a.at(0).second]=a.at(0).first;
    for(int i=1;i<n;i++){
        a2.at(i)=a2.at(i-1)+a.at(i).first;
        if(a.at(i).first==a.at(i-1).first){
            count++;
            a.at(i).first=a2.at(i)-a.at(i).first*count;
        }
        else{
            count=0;
            a.at(i).first=a2.at(i);
        }
        mp[a.at(i).second]=a.at(i).first;
    }
    for(int i=0;i<n;i++){
        cout << a2.at(n-1)-mp.at(i);
        if(i==n-1){
            cout << endl;
        }
        else{
            cout << ' ';
        }
    }
}