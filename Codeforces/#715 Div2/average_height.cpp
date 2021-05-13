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
    ll temp;
    vector<ll> odd,even;
    for(int i=0;i<N;i++) {
        cin>>temp;
        if(temp&1) odd.push_back(temp);
        else even.push_back(temp);
    }
    for(ll i:odd) cout<<i<<" ";
    for(ll j:even) cout<<j<<" ";
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