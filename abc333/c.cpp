#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a(12,0);
    vector<int> b(12,0);
    vector<int> c(12,0);
    vector<int> sum(12,0);
    a.at(0)=0;
    b.at(0)=0;
    c.at(0)=1;
    sum.at(0)=1;
    for(int i=0;i<11;i++){
        a.at(i+1)=sum.at(i);
        b.at(i+1)=i+1;
        c.at(i+1)=1;
        sum.at(i+1)=a.at(i+1)+b.at(i+1)+c.at(i+1);
    }
    for(int i=0;i<11;i++){
        sum.at(i+1)+=sum.at(i);
    }
    int n;
    cin >> n;
    vector<long long> ans(370,0);
    ans.at(1)=3;
    ans.at(2)=13;
    ans.at(3)=23;
    ans.at(4)=33;
    long long sa=10;
    for(int i=2;i<12;i++){
        sa*=10;
        for(int j=1;j<a.at(i)+1;j++){
            ans.at(sum.at(i-1)+j)=ans.at(sum.at(i-2)+j)+sa;
        }
        for(int j=1;j<b.at(i)+1;j++){
            ans.at(sum.at(i-1)+a.at(i)+j)=ans.at(sum.at(i-2)+a.at(i-1)+j)+sa*2;
        }
        ans.at(sum.at(i))=ans.at(sum.at(i-1))+sa*3;
    }
    cout << ans.at(n) << endl;
}