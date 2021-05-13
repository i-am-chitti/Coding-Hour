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
    string str;
    cin>>str;
    ll nT=0,nM=0;
    for(ll i=0;i<N;i++) {
        if(str[i]=='T') nT++;
        else nM++;
        if(nT<nM) {
            cout<<"NO\n";
            return;
        }
    }
    nT=0;
    nM=0;
    for(ll i=N-1;i>=0;i--) {
        if(str[i]=='T') nT++;
        else nM++;
        if(nT<nM) {
            cout<<"NO\n";
            return;
        }
    }
    if(nT!=2*nM) {
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
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