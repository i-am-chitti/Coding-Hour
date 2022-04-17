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
    vector<ll> arr(N);
    for(int i=0;i<N;i++) cin>>arr[i];
    sort(arr.begin(), arr.end());
    ll maxRevenue = LONG_LONG_MIN;
    for(int i=0;i<N;i++) {
        arr[i]*=(N-i);
        maxRevenue = max(maxRevenue, arr[i]);
    }
    cout<<maxRevenue;
}
 

int main()
{
    fast_cin();
        solve();
    return 0;
}