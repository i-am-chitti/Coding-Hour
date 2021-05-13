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
    for(int i=2;i<N;i++) {
        if(arr[i]==arr[i-1] && arr[i]!=arr[i-2]) {
            cout<<i-1;
            break;
        }
        else if(arr[i]==arr[i-2] && arr[i]!=arr[i-1]) {
            cout<<i;
            break;
        }
        else if(arr[i-1]==arr[i-2] && arr[i-1]!=arr[i]) {
            cout<<i+1;
            break;
        }
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