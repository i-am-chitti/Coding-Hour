#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    long long int p,t,a,b,c,ans=LONG_LONG_MAX,quo;
    cin>>p>>a>>b>>c;
    if(p<a) ans=min(a-p,ans);
    else {
        if(p%a==0) {
            ans=0;
        }
        else {
            quo=(p/a)+1;
            ans=min(ans,((quo*a)-p));
        }
    }
    if(p<b) ans=min(ans,b-p);
    else {
        if(p%b==0) {
            ans=0;
        }
        else {
            quo=(p/b)+1;
            ans=min(ans,((quo*b)-p));
        }
    }
    if(p<c) ans=min(ans,c-p);
    else {
        if(p%c==0) ans=0;
        else {
            quo=(p/c)+1;
            ans=min(ans,((quo*c)-p));
        }
    }
    cout<<ans<<"\n";
}   
 

int main()
{
    fast_cin();
    ll T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}