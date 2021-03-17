/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int n,u,r,d,l;
    cin>>n>>u>>r>>d>>l;
    int u1=u,r1=r,d1=d,l1=l;
    if(u1==n) {
        l--;
        r--;
    }
    if(r1==n) {
        u--;
        d--;
    }
    if(d1==n) {
        l--;
        r--;
    }
    if(l1==n) {
        u--;
        d--;
    }
    if(u1==n-1) {
        if(l>r) l--;
        else r--;
    }
    if(r1==n-1) {
        if(u>d) u--;
        else d--;
    }
    if(d1==n-1) {
        if(l>r) l--;
        else r--;
    }
    if(l1==n-1) {
        if(u>d) u--;
        else d--;
    }
    bool isPossible=1;
    if(u<0 || r<0 || d<0 || l<0) isPossible=0;
    if(isPossible) cout<<"YES\n";
    else cout<<"NO\n";
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