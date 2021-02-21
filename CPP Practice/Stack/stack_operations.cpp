#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll N,K;
    cin>>N>>K;
    vector<ll> arr(N);
    for(ll i=0;i<N;i++) cin>>arr[i];
    ll i,maxTop=INT_MIN;
    for(i=0;i<K && i<N;i++) {
        maxTop=max(maxTop,arr[i]);
    }
    if(i==N) {
        if(i<K) cout<<maxTop;
        else cout<<"-1";
    }
    else {
        if(arr[i]>maxTop) cout<<arr[i];
        else cout<<maxTop;
    }
}