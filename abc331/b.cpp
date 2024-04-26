#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,s,m,l;
    cin >> n >> s >> m >> l;
    int s1=s*4,m1=m*3,l1=l*2;
    int saiyasu=min(s1,min(m1,l1));
    int money=0;
    money+=(n/24)*saiyasu;
    if(n%24<=6){
        money+=min(s,min(m,l));
    }
    else if(n%24<=8){
        money+=min(s*2,min(m,l));
    }
    else if(n%24<=12){
        money+=min(s*2,min(m*2,l));
    }
    else if(n%24<=16){
        money+=min(s*3,min(m*2,l*2));
    }
    else if(n%24<=18){
        money+=min(s*3,min(m*3,l*2));
    }
    else if(n%24<=24){
        money+=min(s*4,min(m*3,l*2));
    }
    cout << money << endl;
}