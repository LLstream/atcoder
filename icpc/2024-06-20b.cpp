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
    while(1){
        ll  n,m,t,p;
        cin >> n >> m >> t >> p;
        if(n==0&&m==0&&t==0&&p==0){
            break;
        }
        ll p0x=0,hidarisitay=m-1;
        vector<vector<ll>> ans(m,vector<ll>(n,1));
        rep(i,t){
            ll d,c;
            cin >> d >> c;
            bool tenti=0;
            if(d==1){
                if(2*c<=n){
                    rep(j,c){
                        rep(k,hidarisitay){
                            ans.at(k).at(p0x+j+(c-j)*2-1)+=ans.at(k).at(p0x+j);
                        }
                    }
                    p0x+=c;
                    n-=c;
                }
                else{
                    rep(j,c){
                        rep(k,hidarisitay){
                            if(c+i<=n){
                                ans.at(k).at(p0x+j+(c-j)*2-1)+=ans.at(k).at(p0x+c-1-j);
                            }
                            else{
                                ans.at(k).push_back(ans.at(k).at(p0x+c-1-j));
                            }
                        }
                    }
                    p0x+=c;
                    n=abs(n-2*c);
                }
            }
            else{
                if(!tenti){
                    if(2*c<=hidarisitay+1){
                        rep(j,c){
                            rep(k,n-1){
                                ans.at(hidarisitay-j-(c-j)*2+1).at(k)+=ans.at(hidarisitay-j).at(k);
                            }
                        }
                        hidarisitay-=c;
                    }
                    else{
                        tenti=1;
                        rep(j,hidarisitay+1-c){
                            rep(k,n-1){
                                ans.at(hidarisitay-j-(c-j)*2+1).at(k)+=ans.at(hidarisitay-j).at(k);
                            }
                        }
                        hidarisitay-=c;
                    }
                }
                else{

                }
            }
        }
        ll answer=0;
        rep(i,p){
            ll  x,y;
            cin >> x >> y;
            answer+=ans.at(y).at(p0x+x);
        }
        cout << answer << endl;
    }
}