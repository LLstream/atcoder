#include <bits/stdc++.h>
using namespace std;

int main() {
    int m1,d1,y,m2,d2;
    cin >> m1 >> d1 >> y >> m2 >> d2;
    if(d1==d2){
        d2=1;
        if(m1==m2){
            m2=1;
            y++;
        }
        else{
            m2++;
        }
    }
    else{
        d2++;
    }
    cout << y << ' ' << m2 << ' ' << d2 << endl;
}