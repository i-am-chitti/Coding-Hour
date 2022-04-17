/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

typedef long long ll;


void solve(){
    ll N,M;
    cin>>N>>M;
    ll count=0;
    for(ll b=N;b>1;b--) {
        ll Y=(M-(M%b));
        for(ll a=b-1;a>0;a--) {
            if(Y%a==0) count++;
        }
    }
    cout<<count<<"\n";
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