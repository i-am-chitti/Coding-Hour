#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    ll t,N;
    cin>>N;
    ll fMin=LONG_LONG_MAX,sMin=LONG_LONG_MAX,fMax=LONG_LONG_MIN,sMax=LONG_LONG_MIN;
    for(int i=0;i<N;i++) {
        cin>>t;
        if(t>fMax) {
            sMax=fMax;
            fMax=t;
        }
        else if(t>sMax) sMax=t;
        if(t<fMin) {
            sMin=fMin;
            fMin=t;
        }
        else if(t<sMin) sMin=t;
    }
    //cout<<fMin<<" "<<sMin<<" "<<fMax<<" "<<sMax;
    ll ans1 = sMin*fMin+(max(sMin-fMin,fMin-sMin));
    ll ans2 = sMax*fMax+(max(sMax-fMax,fMax-sMax));
    cout<<max(ans1,ans2)<<"\n";
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