/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
using namespace std;

typedef long long ll;


void solve(){
    int N, c1, c2;
    cin>>N>>c1>>c2;
    int arr[N];
    for(int i=0;i<N;i++) cin>>arr[i];
    int minCost1=0;
    int temp=0;
    for(int i=0;i<N;i++) {
        if(temp!=arr[i]) {
            if(arr[i]==0) minCost1+=c1;
            else minCost1+=c2;
        }
        temp^=1;
    }
    temp=1;
    int minCost2=0;
    for(int i=0;i<N;i++) {
        if(temp!=arr[i]) {
            if(arr[i]==0) minCost2+=c1;
            else minCost2+=c2;
        }
        temp^=1;
    }
    cout<<min(minCost1,minCost2)<<"\n";
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