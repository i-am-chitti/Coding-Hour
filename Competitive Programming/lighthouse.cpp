/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define MOD 1000000007
using namespace std;

typedef long long ll;

void calculateLeftSpan(ll A[], ll n, ll ans[])
{
    ans[0] = 0;
 
    // Calculate span values for rest of the elements
    for (int i = 1; i < n; i++) {
        int counter = 0;
        while ((i - counter) >= 0 && A[i] >= A[i - counter]) {
            counter += ans[i - counter-1];
        }
        ans[i] = counter;
    }
}

void calculateRightSpan(ll A[], ll n, ll ans[])
{
    ans[n-1] = 0;
 
    // Calculate span values for rest of the elements
    for (int i = 1; i < n; i++) {
        int counter = 1;
        while ((i - counter) >= 0 && A[i] >= A[i - counter]) {
            counter += ans[i - counter];
        }
        ans[i] = counter;
    }
}


void solve(){
    ll N;
    cin>>N;
    ll arr[N];
    for(ll i=0;i<N;i++) cin>>arr[i];

    ll leftSpan[N];
    calculateLeftSpan(arr,N,leftSpan);

    for(ll i=0;i<N;i++) cout<<leftSpan[i]<<" ";
    //cout<<"\n";
    ll rightSpan[N];
    calculateRightSpan(arr,N,rightSpan);

    //for(ll i=0;i<N;i++) cout<<rightSpan[i]<<" ";

    ll maxRange=0;
    ll ans;

    for(ll i=0;i<N;i++) {
        ll A = ((leftSpan[i]%MOD)+(rightSpan[i]%MOD))%MOD;
        ll R = ((A%MOD)*((i+1)%MOD))%MOD;
        if(R>maxRange) {
            maxRange = R;
            ans = i+1;
        }
    }
    cout<<ans<<"\n";
}
 

int main()
{
    ll T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}