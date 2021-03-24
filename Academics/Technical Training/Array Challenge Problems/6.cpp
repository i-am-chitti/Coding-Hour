/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;
 

void solve(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++) cin>>arr[i];
    if(N==2) cout<<0<<"\n";
    else {
        sort(arr,arr+N);
        int maxDiff=0;
        for(int i=0;i<N-1;i++) {
            maxDiff=max(maxDiff,abs(arr[i]-arr[i+1]));
        }
        cout<<maxDiff<<"\n";
    }
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