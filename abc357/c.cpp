#include <bits/stdc++.h>
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
using mint = modint998244353;
#endif
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
int main() {
    ll n;
    cin >> n;
    ll s=1;
    rep(i,n){
        s*=3;
    }
    vector<vector<char>> ans(729,vector<char>(729,'#'));
    rep(i,729){
        rep(j,729){
            if(i%3==1&&j%3==1){
                ans.at(i).at(j)='.';
            }
            if(i%9==4&&j%9==4){
                ll k=1;
                ll kazu=1;
                rep(l,k){
                    kazu*=3;
                }
                rep(l,kazu){
                    rep(m,kazu){
                        ans.at(i-kazu/2+l).at(j-kazu/2+m)='.';
                    }
                }
            }
            if(i%27==13&&j%27==13){
                ll k=2;
                ll kazu=1;
                rep(l,k){
                    kazu*=3;
                }
                rep(l,kazu){
                    rep(m,kazu){
                        ans.at(i-kazu/2+l).at(j-kazu/2+m)='.';
                    }
                }
            }
            if(i%81==40&&j%81==40){
                ll k=3;
                ll kazu=1;
                rep(l,k){
                    kazu*=3;
                }
                rep(l,kazu){
                    rep(m,kazu){
                        ans.at(i-kazu/2+l).at(j-kazu/2+m)='.';
                    }
                }
            }
            if(i%243==121&&j%243==121){
                ll k=4;
                ll kazu=1;
                rep(l,k){
                    kazu*=3;
                }
                rep(l,kazu){
                    rep(m,kazu){
                        ans.at(i-kazu/2+l).at(j-kazu/2+m)='.';
                    }
                }
            }
            if(i%829==364&&j%829==364){
                ll k=5;
                ll kazu=1;
                rep(l,k){
                    kazu*=3;
                }
                rep(l,kazu){
                    rep(m,kazu){
                        ans.at(i-kazu/2+l).at(j-kazu/2+m)='.';
                    }
                }
            }
        }
    }
    if(n==0){
        cout << '#' << endl;
        return 0;
    }
    rep(i,s){
        rep(j,s){
            cout << ans.at(i).at(j);
        }
        cout << endl;
    }
}