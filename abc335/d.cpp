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
    vector<vector<int>> a(n,vector<int>(n,0));
    a.at(0).at(0)=1;
    int x=0,y=0;
    int muki=0;//0は右向き、1は下向き、2は左向き、3は上向き
    for(int i=1;i<n*n-1;i++){
        if(muki%4==0){
            if(x==n-1||a.at(x+1).at(y)!=0){
                muki++;
                y++;
                a.at(x).at(y)=a.at(x).at(y-1)+1;
            }
            else{
                x++;
                a.at(x).at(y)=a.at(x-1).at(y)+1;
            }
        }
        else if(muki%4==1){
            if(y==n-1||a.at(x).at(y+1)!=0){
                muki++;
                x--;
                a.at(x).at(y)=a.at(x+1).at(y)+1;
            }
            else{
                y++;
                a.at(x).at(y)=a.at(x).at(y-1)+1;
            }
        }
        else if(muki%4==2){
            if(x==0||a.at(x-1).at(y)!=0){
                muki++;
                y--;
                a.at(x).at(y)=a.at(x).at(y+1)+1;
            }
            else{
                x--;
                a.at(x).at(y)=a.at(x+1).at(y)+1;
            }
        }
        else if(muki%4==3){
            if(a.at(x).at(y-1)!=0){
                muki++;
                x++;
                a.at(x).at(y)=a.at(x-1).at(y)+1;
            }
            else{
                y--;
                a.at(x).at(y)=a.at(x).at(y+1)+1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==(n+1)/2-1&&j==(n+1)/2-1){
                cout << 'T';
            }
            else{
                cout << a.at(i).at(j);
            }
            if(j!=n-1){
                cout << ' ';
            }
            else{
                cout << endl;
            }
        }
    }
}