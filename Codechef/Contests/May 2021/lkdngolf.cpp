/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

typedef long long ll;


void solve(){
    ll N,x,k;
    cin>>N>>x>>k;
    N++;
    if(k>x || k>N) cout<<"NO";
    else if(k==x) cout<<"YES";
    else {
        if(x%k==0) cout<<"YES";
        else if((N-x)%k==0) cout<<"YES";
        else cout<<"NO";
    }
    cout<<"\n";
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