#include <bits/stdc++.h>
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
using mint = modint998244353;
#endif
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
int main() {
    ll a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    vector<pair<ll,string>> ans(31);
    ans.at(0)={-a,"A"};
    ans.at(1)={-b,"B"};
    ans.at(2)={-c,"C"};
    ans.at(3)={-d,"D"};
    ans.at(4)={-e,"E"};
    ans.at(5)={-a-b,"AB"};
    ans.at(6)={-a-c,"AC"};
    ans.at(7)={-a-d,"AD"};
    ans.at(8)={-a-e,"AE"};
    ans.at(9)={-b-c,"BC"};
    ans.at(10)={-b-d,"BD"};
    ans.at(11)={-b-e,"BE"};
    ans.at(12)={-c-d,"CD"};
    ans.at(13)={-c-e,"CE"};
    ans.at(14)={-d-e,"DE"};
    ans.at(15)={-a-b-c,"ABC"};
    ans.at(16)={-a-b-d,"ABD"};
    ans.at(17)={-a-b-e,"ABE"};
    ans.at(18)={-a-c-d,"ACD"};
    ans.at(19)={-a-c-e,"ACE"};
    ans.at(20)={-a-d-e,"ADE"};
    ans.at(21)={-b-c-d,"BCD"};
    ans.at(22)={-b-c-e,"BCE"};
    ans.at(23)={-b-d-e,"BDE"};
    ans.at(24)={-c-d-e,"CDE"};
    ans.at(25)={-a-b-c-d,"ABCD"};
    ans.at(26)={-a-b-c-e,"ABCE"};
    ans.at(27)={-a-b-d-e,"ABDE"};
    ans.at(28)={-a-c-d-e,"ACDE"};
    ans.at(29)={-b-c-d-e,"BCDE"};
    ans.at(30)={-a-b-c-d-e,"ABCDE"};
    sort(ans.begin(),ans.end());
    rep(i,31){
        cout << ans.at(i).second << endl;
    }
}