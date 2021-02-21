#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int t,N,nLucky=0,nUnlucky=0;
    cin>>N;
    for(int i=0;i<N;i++) {
        cin>>t;
        if(t&1) nUnlucky++;
        else nLucky++;
    }
    if(nUnlucky>=nLucky) cout<<"NOT READY";
    else cout<<"READY FOR BATTLE";
}
 

int main()
{
    fast_cin();
        solve();
    return 0;
}