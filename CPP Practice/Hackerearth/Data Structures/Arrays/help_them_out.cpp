#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll N;
    cin>>N;
    vector<ll> arr(N,0);
    for(int i=0;i<N;i++) cin>>arr[i];
    ll nMoves=0;
    bool ifOddPresent=0,ifAllZero=1;
    while(true) {
        ifOddPresent=0;
        for(int i=0;i<N;i++) {
            if(arr[i]%2==0) { arr[i]/=2; }
            else {
                ifOddPresent=1;
                for(int j=0;j<i;j++) arr[j]*=2;
                for(int j=i;j<N;j++) {
                    if(arr[j]%2==1) {
                        arr[j]--;
                        nMoves++;
                    }
                }
                break;
            }
        }
        if(!ifOddPresent) nMoves++;
        // for(int i=0;i<N;i++) cout<<arr[i]<<" ";
        // cout<<endl;
        ifAllZero=1;
        for(int i=0;i<N;i++) {
            if(arr[i]!=0) {
                ifAllZero=0;
                break;
            }
        }
        if(ifAllZero) break;
    }
    cout<<nMoves;

}