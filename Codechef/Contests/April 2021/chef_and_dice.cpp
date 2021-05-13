/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

typedef long long ll;


void solve(){
    ll N;
    cin>>N;
    ll ans=0;
    if(N<=4) {
        if(N==1) ans=20;
        else if(N==2) ans=36;
        else if(N==3) ans=51;
        else ans=60;
    }
    else {
        ans=(N/4)*60;
        ll rem=N%4;
        if(rem==0) ans+=44;
        else if(rem==1) ans+=16;
        else if(rem==2) ans+=28;
        else ans+=39;
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