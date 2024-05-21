#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a(10);
    for(int i=0;i<10;i++){
        cin >> *(a.begin()+i);
    }
    int num=0;
    auto itr=a.begin();
    for(int i=0;i<3;i++){
        num=*itr;
        itr=a.begin()+num;
    }
    cout << num << endl;
    return 0;
}