#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char> s(2);
    vector<char> t(2);
    vector<int> s1(2);
    vector<int> t1(2);
    for(int i=0;i<2;i++){
        cin >> s.at(1);
        s1.at(i)=s.at(i)-96;
    }
    for(int i=0;i<2;i++){
        cin >> t.at(1)
        t1.at(i)=t.at(i)-96;
    }
    if(abs(s1.at(0)-s1.at(1))==abs(t1.at(0)-t1.at(1))){
        cout << "Yes" << endl;
    }
    else if(5-abs(s1.at(0)-s1.at(1))==abs(t1.at(0)-t1.at(1))){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}